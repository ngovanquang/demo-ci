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
 
    }
    post {
        // Clean after build
        always {
            cleanWs()
        }
    }
}