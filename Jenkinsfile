pipeline {

    agent any

    stages {

        stage('Build with Cmake') {
            steps {
                sh 'cmake --version'
                sh 'mkdir build'
                sh 'cd build'
                sh 'cmake ..'
                sh 'make'
            }
        }

        stage('Run execute') {
            steps {
                sh './greeting Alice'
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