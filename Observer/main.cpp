#include "Gossip.h"
#include "Morgans.h"
#include "Dragon.h"
#include "Shanks.h"
#include "Bartolomeo.h"

int main(){
    Morgans* ms(new Morgans);
    Gossip* gp(new Gossip);

    Dragon* dragon = new Dragon("龙", ms);
    Shanks* shanks = new Shanks("香克斯", ms);
    Bartolomeo* bartolomeo = new Bartolomeo("巴托洛米奥", gp);

    ms->notify("路飞成为四皇，悬赏30亿");
    cout<<"========================================="<<endl;
    gp->notify("女帝想嫁给路飞");

    delete ms;
    delete gp;
    delete dragon;
    delete shanks;
    delete bartolomeo;

    return 0;
}