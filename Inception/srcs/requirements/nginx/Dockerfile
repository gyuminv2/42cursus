# 베이스 이미지 지정
FROM debian:buster

# 포트 지정
EXPOSE 443

# 파일 복사
COPY ./tools/setup.sh /setup.sh

# 명령 실행
RUN apt-get update && \
    apt-get upgrade -y && \
    apt-get install -y nginx openssl dumb-init && \
    mkdir -p /etc/ssl && \
    chmod +x setup.sh

COPY conf/default.conf /etc/nginx/conf.d/default.conf

# 컨테이너 실행 명령
ENTRYPOINT ["/usr/bin/dumb-init", "--"]
# 컨테이너 실행 명령
CMD ["sh", "/setup.sh"]