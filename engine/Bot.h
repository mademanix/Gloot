#ifndef BOT_H
#define BOT_H

#include "PluginManager.h"
#include <map>

class 	Bot {

	public:
		
		Bot();
		virtual ~Bot();
		void Start();		/// huh... will be hard
	
	private:
		
		std::map <PluginManager, int> map;
};

#endif // BOT_H