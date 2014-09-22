#ifndef PLUGIN_H
#define PLUGIN_H

#include <string>

template <class... Args>
class 	Plugin {

	public:

		Plugin();

		void 			SetPluginHandler(std::function <void(Args...)>);
		void 			Remove			();
 
		void 			operator()		(Args... args);

		std::string 	GetPluginName	() const;
		std::string 	GetPluginInfo	() const;
		std::string 	GetPluginVersion() const;
		std::string 	GetPluginAuthor	() const;
		int 			GetPluginPiority() const;
		int 			GetPluginIDProt	() const;
		int 			GetPluginIDPlug	() const;
		int 			GetPluginType	() const;

		void 			SetPluginName	(const std::string&);
		void 			SetPluginInfo	(const std::string&);
		void 			SetPluginVersion(const std::string&);
		void 			SetPluginAuthor	(const std::string&);
		void 			SetPluginPiority(const int&);
		void 			SetPluginIDProt	(const int&);
		void 			SetPluginIDPlug	(const int&);
		void 			SetPluginType	(const int&);
		
	protected:

		std::string 								PluginName;
		std::string 								PluginInfo;
		std::string 								PluginVersion;
		std::string 								PluginAuthor;
		int											PluginPiority;
		int 										IDProtocol;
		int 										IDPlugin;
		int 										Type;

		std::function <void(Args...)>			 	PluginHandler;
};

#endif // PLUGIN_H