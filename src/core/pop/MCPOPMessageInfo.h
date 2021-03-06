#ifndef __MAILCORE_MCPOPMESSAGEINFO_H_

#define __MAILCORE_MCPOPMESSAGEINFO_H_

#include <MailCore/MCBaseTypes.h>

#ifdef __cplusplus

namespace mailcore {
    
    class POPMessageInfo : public Object {
    public:
        POPMessageInfo();
        virtual ~POPMessageInfo();
        
        virtual void setIndex(unsigned int index);
        virtual unsigned int index();
        
        virtual void setSize(unsigned int size);
        virtual unsigned int size();
        
        virtual void setUid(String * uid);
        virtual String * uid();
        
    public: // subclass behavior
        POPMessageInfo(POPMessageInfo * other);
        virtual String * description();
        virtual Object * copy();
        
    private:
        unsigned int mIndex;
        unsigned int mSize;
        String * mUid;
        
        void init();
    };
    
}

#endif

#endif
