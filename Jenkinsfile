pipeline {
    agent {
        label 'mikero'
    }

    stages {
        stage('Build') {
            steps {
                bat 'build.bat' 
                archiveArtifacts artifacts: '@anrop_magazine_wells/**/*'
            }
            post {
                always {
                    bat 'subst p: /d > nul || exit /b 0'
                }
            }
        }
    }
}
