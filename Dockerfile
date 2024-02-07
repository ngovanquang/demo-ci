FROM jenkins/jenkins:lts

USER root
RUN apt-get update && apt-get install -y git gcc cmake
USER jenkins

EXPOSE 8080