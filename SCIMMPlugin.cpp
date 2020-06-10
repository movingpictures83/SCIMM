#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include "SCIMMPlugin.h"

void SCIMMPlugin::input(std::string file) {
 inputfile = file;
 std::ifstream ifile(inputfile.c_str(), std::ios::in);
 while (!ifile.eof()) {
   std::string key, value;
   ifile >> key;
   ifile >> value;
   std::cout << key << " " << value << std::endl;
   parameters[key] = value;
 }
}

void SCIMMPlugin::run() {
//echo -en '\n' | scimm.py -s HMP_MOCK.v35.fasta -k 5 --cs 0 -p 1 --lt 1 --ct 1
}

void SCIMMPlugin::output(std::string file) {
 std::string outputfile = file;
 std::string myCommand = "";
myCommand += "export PATH=${PWD}/plugins/SCIMM/scimm/bin:${PATH}; echo -en \'\\n\' | scimm.py -s "+parameters["inputfile"]+" -k "+parameters["numclusters"]+" --cs 0 -p 1 --lt 1 --ct 1 --outfile "+outputfile;
 std::cout << myCommand << std::endl;
 system(myCommand.c_str());
}

PluginProxy<SCIMMPlugin> SCIMMPluginProxy = PluginProxy<SCIMMPlugin>("SCIMM", PluginManager::getInstance());
