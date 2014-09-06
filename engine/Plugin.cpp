#ifndef PLUGIN_CPP
#define PLUGIN_CPP

#include "Plugin.h"

template <class... Args>
void Plugin <Args...>::SetPluginHandler(std::function <void(Args...)> f) {

    PluginHandler = f;
}

template <class... Args>
void Plugin <Args...>::Remove() {

	PluginHandler = nullptr;
}

template <class... Args>
void Plugin <Args...>::operator(Args... args) {

	for(auto callback : this -> callbacks)
        callback(args...);
}

template <class... Args>
std::string Plugin::GetPluginName() const {

	return PluginName;
}

template <class... Args>
std::string Plugin::GetPluginInfo() const {

	return PluginInfo;
}

template <class... Args>
std::string Plugin::GetPluginVersion() const {

	return PluginVersion;
}

template <class... Args>
std::string Plugin::GetPluginAuthor() const {

	return PluginAuthor
}

template <class... Args>
int Plugin::GetPluginPiority() const {

	return PluginPiority;
}

template <class... Args>
int Plugin::GetPluginIDProt() const {

	return IDProtocol;
}

template <class... Args>
int Plugin::GetPluginIDPlug() const {

	return IDPlugin;
}

template <class... Args>
int Plugin::GetPluginType() const {

	return Type;
}

template <class... Args>
void Plugin::SetPluginName(const std::string& s) {

	PluginName = s;
}

template <class... Args>
void Plugin::SetPluginInfo(const std::string& s) {

	PluginInfo = s;
}

template <class... Args>
void Plugin::SetPluginVersion(const std::string& s) {

	PluginVersion = s;
}

template <class... Args>
void Plugin::SetPluginAuthor(const std::string& s) {

	PluginAuthor = s;
}

template <class... Args>
void Plugin::SetPluginPiority(const int& i) {

	PluginPiority = i;
}

template <class... Args>
void Plugin::SetPluginIDProt(const int& i) {

	IDProtocol = i;
}

template <class... Args>
void Plugin::SetPluginIDPlug(const int& i) {

	IDPlugin = i;
}

template <class... Args>
void Plugin::SetPluginType(const int& i) {

	Type = i;
}

#endif // PLUGIN_CPP