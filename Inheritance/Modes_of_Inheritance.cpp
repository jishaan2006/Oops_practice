class A{
    private:
    int x;
    protected:
    int y;
    public:
    int x;
};
class B:public A{           //all changes are for next generation 
    //x->inaccessible 
    //y->protected
    //z->public 
};
class C:protected A{
    //x->inaccessible 
    //y->protected 
    //z->Becomes protected 
};
class D:private A{
    //x->inaccessible 
    //y->Becomes private     The class that inherits from A will not access y but class D can 
    //z->Becomes private
};