#include <memory>
#include <stdio.h>
#include <vcruntime_typeinfo.h>

class Actor
{
public:
    void Print(){ printf_s("Actor::Print"); }
    virtual ~Actor(){}
};
class Pawn : public Actor{};

// 매크로
#define MAX 10
#define Add(a,b) (a+b)
//int Add(int a, int b) {return a + b;}
#define String(a) #a
#define StringCat(a,b) a##b

#ifdef MAX
#undef MAX

#elif Add 
#else

#endif


union Uni{
    int a;
    char c[4];
};

int main()
{
    // std::shared_ptr<Actor*> a = std::make_shared<Actor*>(new Actor);
    // (*(a.get()))->Print();
    //
    // printf_s("\n%s", typeid(**(a.get())).name());
    //printf_s("%s", StringCat("Hello", "World"));
    //int a = Add(10, 20);
    //int a = (10+20);
    
    // Actor a;
    // Actor b = a;
    //
    // int a = 10;
    // int& rA = 100;
    // int&& aa = 10;

    //
    // std::unique_ptr<Actor> pActor = std::make_unique<Actor>();
    // std::unique_ptr<Actor> pActor2 = pActor;
    std::shared_ptr<Actor> pActor = std::make_shared<Actor>();
    std::shared_ptr<Actor> pActor2 = pActor;
    std::weak_ptr<Actor> pActor3 = pActor;
    //
    // pActor->Print();
    //
    //
    // printf_s("\npActor3.use_count : %d\n", pActor3.use_count());
    // printf_s("\nuse_count : %d\n", pActor.use_count());
    // pActor = nullptr;
    // printf_s("\nuse_count : %d\n", pActor2.use_count());
    //

    

    
    //Actor* pActor2 = pActor;
    


    //
    // Pawn pawn;
    // Actor* actor = dynamic_cast<Actor*>(&pawn);
    // if (actor)
    // {
    //     actor->Print();
    // }
    //
    // Actor actor2;
    // Pawn* pawn2 = dynamic_cast<Pawn*>(&actor2);
    // printf_s( "\n%s\n", typeid(actor2).name());
    // if (pawn2)
    // {
    //     pawn2->Print();
    // }

    
    // float f =3.156f;
    // int a = static_cast<int>(f);
    // a = f;
    //
    // printf_s("f : %f, a = %d", f, a);
    
}
