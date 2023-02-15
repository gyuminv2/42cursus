# 베이스 이미지 지정
FROM debian:buster

# 포트 지정
EXPOSE 9000

# 파일 복사
COPY ./tools/setup.sh /setup.sh

# 명령 실행
RUN apt-get update && \
    apt-get upgrade -y && \
    apt-get install -y curl mariadb-client php7.3-fpm php-mysql dumb-init && \
    curl -O https://raw.githubusercontent.com/wp-cli/builds/gh-pages/phar/wp-cli.phar && \
    chmod +x wp-cli.phar && \
    mv wp-cli.phar /usr/local/bin && \
    ln -sf /usr/local/bin/wp-cli.phar /usr/local/bin/wp-cli && \
    mkdir -p /var/www/html/wordpress /run/php && \
    usermod -G www-data -a www-data && \
    chown -R www-data:www-data /var/www/ && \
    chmod +x setup.sh

# 작업 디렉토리
WORKDIR /var/www/html/wordpress

COPY ./conf/www.conf /etc/php/7.3/fpm/pool.d/www.conf

# 컨테이너 실행 명령
ENTRYPOINT ["/usr/bin/dumb-init", "--"]
# 컨테이너 실행 명령
CMD ["sh", "/setup.sh"]