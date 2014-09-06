#include "SDK.h"

#include <gloox/client.h>
#include <gloox/message.h>
#include <gloox/messagehandler.h>
#include <gloox/connectionlistener.h>

/// xml config function

PluginInfo XMPP() {

	PluginInfo info;
	info.name 				= "XMPP Protocol";
	info.info 				= "Next simply XMPP Connection Plugin";
	info.version 			= "0.1";
	info.author 			= "mademan <pradley1994@gmail.com>";
	info.type 				= PROTOCOL;
	info.id_protocol 		= 0;
	info.id_plugin 			= 0;
	info.important 			= 0;

	gloox::Client *client;

	client = new gloox::Client(/* sth */);

	client -> disableRoster();

	client -> setPresence(gloox::Presence::Chat, -1);

	client -> disco() -> setVersion("gloox", "1.0.10", "[ using XMPP Connection Plugin ]");
	client -> disco() -> setIdentity("Mjr", "Gloot");

	client -> setCompression(false);
	client -> registerConnectionListener(this);

	client -> connect();

	return info;
}