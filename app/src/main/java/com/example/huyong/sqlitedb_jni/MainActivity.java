package com.example.huyong.sqlitedb_jni;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.widget.TextView;

import com.daqi.sqlite.dbnative.SqlitedbForCK;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
//        setContentView(R.layout.activity_main);

        String str = new SqlitedbForCK().getDBVersion("");
        TextView textView = new TextView(this);
        textView.setText(str);
        setContentView(textView);
    }
}
