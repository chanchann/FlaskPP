#include "flask.h"
#include <iostream>

flask::Flask app;

int main()
{
    app.route("/",
    []{
        return "Hello World!";
    });

    app.port(9001)
       .run();
}