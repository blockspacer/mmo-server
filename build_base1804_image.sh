ln -sf .dockerignore.depends .dockerignore
docker build --rm -f "server-docker/mmo-server-base-1804.Dockerfile" -t mmo-server-base:18.04 server-docker