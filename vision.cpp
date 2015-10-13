#include "vision.hpp"
#include "cuda.hpp"
#include <iostream>

using namespace std;

namespace vision {

void
run_sift ()
{
    cout << "Computing features..." << endl;
    cuda::do_something ();
}

}
