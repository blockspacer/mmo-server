#!/bin/bash
cd `dirname $0`
DIR_file=`pwd`

docker run --network=network-mmo --ip=172.28.1.3 --name mmo-server-code  --ulimit core=-1 --security-opt seccomp=unconfined -v /$(pwd)/server-code:/data/mmorpg/server-code -v /$(pwd)/server-res:/data/mmorpg/server-res -v /$(pwd)/share-code:/data/mmorpg/share-code -v /$(pwd)/data/log:/data/log  --user=ubuntu mmo-server-depends