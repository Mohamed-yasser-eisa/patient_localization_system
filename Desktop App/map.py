from GUI import Ui_MainWindow
import sys
from PyQt5 import QtCore, QtGui, QtWidgets
import cv2
from PyQt5.QtGui import *
from firebase import firebase


class ApplicationWindow(QtWidgets.QMainWindow):
    def __init__(self):
        super(ApplicationWindow, self).__init__()
        self.ui = Ui_MainWindow()
        self.ui.setupUi(self)

        self.timer = QtCore.QTimer()
        self.timer.setInterval(100)
        self.timer.timeout.connect(self.get_prediction)
        self.timer.start()

        self.dic={'0':[450,160],'1':[390,160],'2':[335,160],'3':[250,160],'4':[180,160],'5':[295,115],'6':[295,55]}

        self.Firebase = firebase.FirebaseApplication('https://location-77ccd.firebaseio.com', None)


    def get_prediction(self):

        self.cvImage = cv2.imread('SBME Map full-copy.png')

        region = self.Firebase.get('/X', None)

        cv2.circle(self.cvImage, (self.dic[str(region)][0], self.dic[str(region)][1]), 4, (255, 0, 0), -1)

        height, width, byteValue = self.cvImage.shape
        byteValue = byteValue * width
        self.mQImage = QImage(self.cvImage, width, height, byteValue, QImage.Format_RGB888)
        self.ui.lable.setPixmap(QtGui.QPixmap.fromImage(self.mQImage))




def main():
    app = QtWidgets.QApplication(sys.argv)
    application = ApplicationWindow()
    application.show()
    app.exec_()


if __name__ == "__main__":
    main()