#ifndef BOT_CPP
#define BOT_CPP

#include "Bot.h"

Bot::Bot() {

}

Bot::~Bot() {

}

void Bot::Start() {

}

void Bot::XMLConfig() {

}

void Bot::onConnect() {

}

void Bot::onDisconnect(					gloox::ConnectionError e) {

}

void Bot::handleMUCMessage(				gloox::MUCRoom* room, 
										const gloox::Message& message, 
										bool priv) {
	
}

bool Bot::onTLSConnect(					const gloox::CertInfo& cert) {

}

void Bot::handleMUCParticipantPresence(	gloox::MUCRoom* room, 
										gloox::MUCRoomParticipant participant, 
										const gloox::Presence& presence) {

}

bool Bot::handleMUCRoomCreation(		gloox::MUCRoom* room) {


}

void Bot::handleMUCSubject(				gloox::MUCRoom* room, 
										const std::string& nick, 
										const std::string& subject) {

}

void Bot::handleMUCInviteDecline(		gloox::MUCRoom* room, 
										const gloox::JID& jid, 
										const std::string& reason) {

}

void Bot::handleMUCError(				gloox::MUCRoom* room, 
										gloox::StanzaError e) {

}

void Bot::handleMUCInfo(				gloox::MUCRoom* room, 
										int features, 
										const std::string& name,
										const gloox::DataForm* infoForm) {

}

void Bot::handleMUCItems(				gloox::MUCRoom*, 
										gloox::Disco::ItemList& items) {

}


void Bot::handleMessage(				const gloox::Message& message, 
										gloox::MessageSession* session) {

}

#endif // BOT_CPP