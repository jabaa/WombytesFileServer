#include <Poco/Util/ServerApplication.h>

namespace Wombytes {

class Server : public Poco::Util::ServerApplication {};

}

int main(int argc, char **argv) {
  Wombytes::Server app;
  return app.run(argc, argv);
}
