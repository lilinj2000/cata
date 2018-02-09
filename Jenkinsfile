pipeline {
  agent {
    docker {
      image 'lilinj2000/dev:centos6'
    }
  }

  environment {
    home_3rd = '/var/jenkins_home/dist_pkg/3rd/centos6'
    home_libs = '/var/jenkins_home/dist_pkg/libs/centos6'
    home_app = '/var/jenkins_home/dist_pkg/app/centos6'
  }

  stages {
    stage('code check') {
      steps {
        sh '''
cpplint --output=vs7 --recursive .
cppcheck --enable=all --inconclusive --xml --xml-version=2 . 2> cppcheck.xml
	'''
      }
    }

    stage('build') {
      steps {
        sh '''
home_cata=${home_libs}/cata
./configure --prefix=${home_cata}
make
	'''
      }
    }
/*
    stage('utest') {
      steps {
        sh 'make check'
        junit(testResults: 'utest/test_detail.xml', allowEmptyResults: true)
      }
    }
*/
    stage('install') {
      steps {
        sh 'make install'
      }
    }
  }
}