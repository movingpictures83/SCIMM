#ifndef SCIMMPLUGIN_H
#define SCIMMPLUGIN_H

#include "Plugin.h"
#include "PluginProxy.h"
#include <string>

class SCIMMPlugin : public Plugin
{
public: 
 std::string toString() {return "SCIMM";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;
 std::map<std::string, std::string> parameters;

};

#endif
