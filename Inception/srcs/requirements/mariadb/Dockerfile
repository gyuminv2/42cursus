# 베이스 이미지 지정
FROM debian:buster

# 포트 지정 (3306: mysql default port)
EXPOSE 3306

# 파일 복사
COPY ./tools/setup.sh /setup.sh

# 명령 실행
RUN apt-get update && \
    apt-get upgrade -y && \
    apt-get install -y mariadb-server mariadb-client dumb-init && \
    mkdir -p /var/run/mysqld && \
    chown -R mysql:mysql /var/run/mysqld && \
    chmod +x setup.sh && \
    rm -f /etc/mysql/mariadb.conf.d/50-server.cnf

COPY ./conf/50-server.cnf /etc/mysql/mariadb.conf.d/

# 컨테이너 실행 명령
ENTRYPOINT ["/usr/bin/dumb-init", "--"]
# 컨테이너 실행 명령
CMD ["sh", "/setup.sh"]