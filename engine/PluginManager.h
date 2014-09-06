#ifndef PLUGIN_MANAGER_H
#define PLUGIN_MANAGER_H

/** 
  Copyright (c) 2014 by Arkadiusz Pradelski <pradley1994@gmail.com>
  This file is part of the GlootXMPP Bot.

  This software is distributed under a license. The full license
  agreement can be found in the file LICENSE in this distribution.
  This software may not be copied, modified, sold or distributed
  other than expressed in the named license agreement.

  This software is distributed without any warranty. 
*/

#include <vector>

#include <dlfcn.h>

#include "Plugin.h"
#include "../plugin_src/SDK.h"

class 	PluginManager {
	
	public:

		PluginManager();
		virtual ~PluginManager();
		
		void Reload();
		void RemoveNotWorking(Plugin p);

		void Execute(int IDPlugin, int IDProtocol);
	
	protected:
		
		void PrintInfo(Plugin p);
	
	private:
		
		std::vector <Plugin> PluginContainerLoadProtocol;
		std::vector <Plugin> PluginContainerLoadStill;
		std::vector <Plugin> PluginContainerLoadWhenCall;
		std::vector <Plugin> PluginContainerLoadOnce;
};

#endif // PLUGIN_MANAGER_H