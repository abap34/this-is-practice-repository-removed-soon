FROM alpine:latest

RUN apk add --no-cache g++

COPY . /app

RUN sh /app/build.sh

ENTRYPOINT [ "./docker-entrypoint.sh" ]
