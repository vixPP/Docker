# Используем базовый образ Ubuntu
FROM ubuntu:22.04

# Устанавливаем необходимые пакеты и компиляторы
ENV DEBIAN_FRONTEND=noninteractive
RUN apt-get update && \
    apt-get install -y build-essential gcc g++ clang cmake tzdata && \
    ln -fs /usr/share/zoneinfo/Etc/UTC /etc/localtime && \
    dpkg-reconfigure --frontend noninteractive tzdata

# Устанавливаем рабочую директорию
WORKDIR /test

# Копируем проект в контейнер
COPY . .

# Компилируем проект
RUN cmake . && make
