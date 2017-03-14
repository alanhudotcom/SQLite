package com.daqi.sqlite.dbnative;

/**
 * Created by huyong on 17/3/13.
 */

public class SqlitedbForCK {

    static
    {
        System.loadLibrary("sqliteDB");
    }

    public native String getDBVersion(String srcPath);

    public native boolean readFileToDB(String srcPath, String destPath);

    public native boolean dumpFileFromDB(String srcPath, String destPath);


}
