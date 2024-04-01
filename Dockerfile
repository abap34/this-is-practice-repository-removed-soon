FROM alpine:latest

RUN apk add --no-cache g++

COPY . /app

WORKDIR /app

RUN sh build.sh

ENTRYPOINT [ "./docker-entrypoint.sh" ]
