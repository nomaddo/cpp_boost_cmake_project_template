#include <iostream>
#include <boost/program_options.hpp>
#include <boost/format.hpp>

#include "lib.hpp"

struct cmd_options
{
  int32_t n;
};

cmd_options parse_args(int argc, char *argv[])
{
  using namespace boost::program_options;
  options_description desc("Hello fact");
  {
    auto f = desc.add_options();
    f("n", value<int32_t>(), "Specify `fact` argument");
  }
  positional_options_description pd;
  pd.add("n", 1);

  variables_map vm;
  store(command_line_parser(argc, argv).options(desc).positional(pd).run(), vm);
  notify(vm);

  if (vm["n"].empty())
  {
    std::cout << desc << std::endl;
    exit(0);
  }
  int32_t n = vm["n"].as<int32_t>();
  return {n};
}

int main(int argc, char *argv[])
{
  auto options = parse_args(argc, argv);
  boost::format("fact(%1%)=%2%") % options.n % fact(options.n);
}
