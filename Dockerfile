# Use a lightweight base image
FROM alpine:latest

COPY . /app

RUN sh /app/build.sh

ENTRYPOINT [ "/app/build/almo" ]