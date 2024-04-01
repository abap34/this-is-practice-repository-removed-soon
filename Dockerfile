FROM alpine:latest

# setup g++
RUN apk add --no-cache g++

COPY . /app

WORKDIR /app

RUN sh build.sh

ENTRYPOINT [ "/app/docker-entrypoint.sh" ]