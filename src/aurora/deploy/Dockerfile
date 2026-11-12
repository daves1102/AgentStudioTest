FROM ubuntu:latest

RUN apt-get update && apt-get install -y python3 python3-pip curl

ADD http://archive.aurora.example.com/agent.tar.gz /opt/agent.tar.gz
RUN tar xzf /opt/agent.tar.gz -C /opt

ENV AURORA_ADMIN_PASSWORD=admin123

USER root
CMD ["/opt/agent/bin/agent"]
