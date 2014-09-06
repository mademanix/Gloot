#ifndef PLUGIN_EXAMPLE_H
#define PLUGIN_EXAMPLE_H

typedef const char* 	basic_string;
typedef unsigned short 	id;

struct PluginInfo {

	basic_string	name;					/// plugin name, u'know

	basic_string	info;					/// short info

	basic_string	version;				/// plugin version

	basic_string	author;					/// yur personals

	enum _type {							/// well... kind of plugin
											/// is it:
		PROTOCOL 			= 1 << 1,		///	 = protocol plugin (XMPP, GG, IRC) ?
		STILL_LOAD 			= 1 << 2,		///	 = always-load plugin (log- or AI-module <Markovsky>) ?
		WHEN_CALL			= 1 << 4,		///  = call-command (simply commands, ban, kick, hack) ?
		CALL_ONCE 			= 1 << 8		///  = only-once-call plugin (combo with f.e. uptime) ?
											/// 	+ don't see? well...
	}				type;

	id 				id_protocol;			/// VERI IMPORTANT STAF (smaller can more 
											/// *if you know what that means... cuz I know.*
											/// *oh... nvm*)
											/// so, u'know that protocols have own
											/// special stuff (like this: XMPP-like plugin
											/// GG-like plugin etc)
											/// so it will be a lame when XMPP plugin 
											/// will call in GG protocol, yup?

	id				id_plugin				/// for easy read plugin stuff

	int				important;				/// must load before other plugin?
											/// is good when protocols get 0!
};

#endif // PLUGIN_EXAMPLE_H