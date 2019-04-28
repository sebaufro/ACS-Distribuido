#ifndef _HELLOWORlDIMPL_H_
#define _HELLOWORLDIMPL_H_

#include <helloworldS.h>
#include <acscomponentImpl.h>
#include <maciSimpleClient.h>
#include <acsThread.h>

class helloworldImpl: public virtual acscomponent::ACSComponentImpl,
  public POA_Hello::helloworld
{
        public:
                helloworldImpl(const ACE_CString name, maci::ContainerServices * containerServices);
                virtual ~helloworldImpl();

		virtual void initialize(void) throw (acsErrTypeLifeCycle::acsErrTypeLifeCycleExImpl);
		virtual void execute(void) throw (acsErrTypeLifeCycle::acsErrTypeLifeCycleExImpl);
		virtual void cleanUp(void);
		virtual void aboutToAbort(void);

		
		void sayHello(const char* var); 

        private:
                std::string component_name;
		//maci::SmartPtr< Sensors::sensortag > sensortag_sp;
};

#endif
