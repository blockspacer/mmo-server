GLOBAL_IP=172.28.1.3
GLOBAL_PORTD_START=17000
GLOBAL_OUT_IP=172.28.1.3

echo "create database global;" | docker exec -i mysql-global sh -c 'exec mysql -v -uroot -p"3Killyou"'
cat server-res/res/db/globaldb.sql | docker exec -i mysql-global sh -c 'exec mysql -v -uroot -p"3Killyou" global'

cmd="m4 -DGLOBAL_IP=${GLOBAL_IP} -DGLOBAL_PORT_START=${GLOBAL_PORTD_START} -DGLOBAL_OUT_IP=${GLOBAL_OUT_IP} /data/mmorpg/server-res/res/db/init_globalservice.sql.template"

docker exec -i mmo-server-build sh -c "${cmd}" |
docker exec -i mysql-global sh -c 'exec mysql -uroot -p"3Killyou" global'
echo "select * from tbld_servicedetail where worldid=0;" | docker exec -i mysql-global sh -c 'exec mysql -v -uroot -p"3Killyou" global'