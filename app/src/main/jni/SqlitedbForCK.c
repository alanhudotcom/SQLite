//
// Created by huyong on 17/3/13.
//

#include "SqlitedbForCK.h"

#ifdef __cplusplus
extern "C" {
#endif

JNIEXPORT jstring JNICALL Java_com_daqi_sqlite_dbnative_SqlitedbForCK_getDBVersion (JNIEnv *env, jobject thiz, jstring sourceDBFile)
{
    return (*env)->NewStringUTF(env, (char*)getDBVersion());
}

JNIEXPORT jboolean JNICALL  Java_com_daqi_sqlite_dbnative_SqlitedbForCK_dumpFileFromDB
  (JNIEnv *env, jobject thiz, jstring sourceDBFile, jstring dumpDBFile)
{
	const char* sourceFile;
	const char* inputFile;

	if((sourceDBFile != NULL)&&(dumpDBFile!=NULL))
	{
		sourceFile = (*env)->GetStringUTFChars(env,sourceDBFile, NULL);
		inputFile = (*env)->GetStringUTFChars(env,dumpDBFile, NULL);
		return dumpDB2File(sourceFile,inputFile);
	}
	else
	{
		return false;
	}
}

JNIEXPORT jboolean JNICALL Java_com_daqi_sqlite_dbnative_SqlitedbForCK_readFileToDB
  (JNIEnv *env, jobject thiz, jstring sourceDBFile, jstring inputDBFile)
{
	const char* sourceFile;
	const char* inputFile;

	if((sourceDBFile != NULL)&&(inputDBFile!=NULL))
	{
		sourceFile = (*env)->GetStringUTFChars(env,sourceDBFile, NULL);
		inputFile = (*env)->GetStringUTFChars(env,inputDBFile, NULL);
		return readFile2DB(sourceFile,inputFile);
	}
	else
	{
		return false;
	}
}

#ifdef __cplusplus
}
#endif
