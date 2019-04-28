import Hello__POA
from Acspy.Servants.ContainerServices import ContainerServices
from Acspy.Servants.ComponentLifecycle import ComponentLifecycle
from Acspy.Servants.ACSComponent import ACSComponent
from Acspy.Clients.SimpleClient import PySimpleClient
from Acspy.Common.Log import getLogger


class helloworld(Hello__POA.helloworld,ACSComponent, ContainerServices, ComponentLifecycle):
	
	
	def __init__(self):
		ACSComponent.__init__(self)
		ContainerServices.__init__(self)
		

		pass

	def initialize(self):
		'''
		Override this method inherited from ComponentLifecycle
		'''
		self.getLogger().logInfo("HELLO PYTHON INIT ACCESS")

	def cleanUp(self):
		'''
		Override this method inherited from ComponentLifecycle
		'''
	def sayHello(self, var):
		print(var)
