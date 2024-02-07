pipeline {

    agent any

    stages {

        stage('Build with Cmake') {
            
            steps {
                sh 'cmake --version'
                sh script:'''
                    #!/bin/bash
                    mkdir build
                    cd ./build
                    cmake ..
                    make
                '''
            }
        }

        stage('Run execute') {
            steps {
                sh script:'''
                    #!/bin/bash
                    cd ./build
                    ./greeting Alice
                '''
            }
        }
 
    }
    post {
        // Clean after build
        always {
            cleanWs()
        }
    }
}