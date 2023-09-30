#include "Pizza.h"
#include "PizzaStore.h"
#include "NYSPizzaStore.h"
#include "ChicagoPizzaStore.h"

int main(){
    auto chicagoStore = new ChicagoPizzaStore();
    auto nysStore = new NYSPizzaStore();

    auto nyCheese = nysStore->orderPizza("cheese");
    auto chicagoCheese = chicagoStore->orderPizza("cheese");

    return 0;
}