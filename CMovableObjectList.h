#include <list>
#include "CMovableObject.h"

typedef list<CMovableObject*> MOList;
typedef MOList::iterator MOListIter;

class CMovableObjectList
{
    private:
    MOList pMObjs;

    public:
    CMovableObjectList() {}

    ~CMovableObjectList() {}

    void addMovableObj(CMovableObject* _pObj) {pMObjs.push_back(pMObjs);}
    void update(double _dt) {
        for (MOListIter it = pMObjs.begin(); it != pMObjs.end(); it++)
        {
            (*it)->move(_dt);
        }
    }
}
