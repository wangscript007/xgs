﻿
#include "DatabaseModule.h"

#include "sdk/config/SystemConfig.h"
#include "sdk/pbconfig/serverinfo.conf.pb.h"

#include "xshare/work/LogicManager.h"
#include "xdb/DBHandler.h"
#include "xdb/mongo/MongoClient.h"

#include <glog/logging.h>

#include <memory>

std::string DatabaseModule::GetName()
{
	return "DatabaseModule";
}

bool DatabaseModule::Init()
{
	// 	auto& dbConf = SystemConfig::Me()->GetSdkConfig()->databasemodule();
	// 
	// 	// mongodb begin
	// 	MongoClient::InitInstance();
	// 	MongoClient::Me()->Init(dbConf.host()/*"mongodb://127.0.0.1:27017"*/, dbConf.username()/*""*/, dbConf.password()/*""*/);
	// 	MongoClient::Me()->SetDefaultDBName(dbConf.dbname()/*"sdkdb"*/);
	// 	if (MongoClient::Me()->Start())
	// 	{
	// 		LOG(WARNING) << "mongodb connect success";
	// 	}
	// 	else
	// 	{
	// 		LOG(ERROR) << "mongodb connect failed";
	// 		return false;
	// 	}
	// 	// mongodb end
	// 
	// 	// 初始化数据库
	// 	for (auto handler : *LogicManager::Me())
	// 	{
	// 		auto dbHandler = dynamic_cast<DBHandler*>(handler);
	// 		if (dbHandler)
	// 		{
	// 			dbHandler->PreInitDatabase();
	// 		}
	// 	}
	return true;
}

void DatabaseModule::Exit()
{
	// 	// mongodb begin
	// 	MongoClient::Me()->Stop();
	// 	MongoClient::DestroyInstance();
	// 	// mongodb end
}

void DatabaseModule::RunOnce()
{

}
