pipeline {

    agent any

    tools { 
        
    }
    environment {
       
    }
    stages {

        stage('Build with Cmake') {
            steps {
                sh 'cmake --version'
                sh 'mkdir build'
                sh 'cd build'
                cmake ..
                make
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