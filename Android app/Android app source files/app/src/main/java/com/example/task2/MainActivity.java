package com.example.task2;

import androidx.annotation.NonNull;
import androidx.appcompat.app.AppCompatActivity;

import android.annotation.SuppressLint;
import android.content.Context;
import android.content.Intent;
import android.graphics.Color;
import android.graphics.drawable.Drawable;
import android.os.Bundle;
import android.os.Message;
import android.util.Log;
import android.util.Property;
import android.view.View;
import android.widget.TextView;
import android.widget.Toast;

import com.firebase.client.ChildEventListener;
import com.firebase.client.Firebase;
import com.firebase.client.Query;
import com.google.firebase.database.DataSnapshot;
import com.google.firebase.database.DatabaseError;
import com.google.firebase.database.DatabaseReference;
import com.google.firebase.database.Exclude;
import com.google.firebase.database.FirebaseDatabase;
import com.google.firebase.database.IgnoreExtraProperties;
import com.google.firebase.database.ValueEventListener;
import com.jjoe64.graphview.GraphView;
import com.jjoe64.graphview.series.DataPoint;
import com.jjoe64.graphview.series.PointsGraphSeries;
import com.google.firebase.database.ValueEventListener;
import com.jjoe64.graphview.series.Series;

import org.w3c.dom.Comment;

import java.util.HashMap;
import java.util.HashSet;
import java.util.Map;
import java.util.concurrent.TimeUnit;

public class MainActivity extends AppCompatActivity {

    private static final String TAG = "MainActivity";
    int Y=70;
    int X=70;
    @SuppressLint("UseCompatLoadingForDrawables")
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        //write to firebase database
        FirebaseDatabase database = FirebaseDatabase.getInstance();
        DatabaseReference myRef1 = database.getReference("X");
        //write massage to user in app
        Toast.makeText(this, "Firebase connection succeeded!", Toast.LENGTH_SHORT).show();
        //draw function
        GraphView graph = (GraphView) findViewById(R.id.graph1);
            //set map as background to graph:
            int imageResource = getResources().getIdentifier("@drawable/sbme_map", null, getPackageName());
            Drawable graph_background = getResources().getDrawable(imageResource);
            graph.setBackground(graph_background);
            // set min and max values:
            // set manual X bounds
            graph.getViewport().setXAxisBoundsManual(true);
            graph.getViewport().setMinX(0.0);
            graph.getViewport().setMaxX(60.0);
            // set manual Y bounds
            graph.getViewport().setYAxisBoundsManual(true);
            graph.getViewport().setMinY(0.0);
            graph.getViewport().setMaxY(60.0);
           // graph.setTitle("SBME department's map");
            graph.setTitleTextSize(60);
            graph.setTitleColor(Color.BLACK);
            //(PointsGraphSeries.Shape.TRIANGLE);
            //First two lines change the grid line color
            graph.getGridLabelRenderer().setGridColor(android.R.color.black);
            graph.getGridLabelRenderer().setHighlightZeroLines(false);
            //Below two lines change the label color
            graph.getGridLabelRenderer().setVerticalLabelsColor(android.R.color.black);
            graph.getGridLabelRenderer().setHorizontalLabelsColor(android.R.color.black);
            graph.getGridLabelRenderer().reloadStyles();
            //start drawing the gotten data
            PointsGraphSeries<DataPoint> series=new PointsGraphSeries<>();
            // Read from the database
            myRef1.addValueEventListener(new ValueEventListener() {
                @Override
                public void onDataChange(DataSnapshot dataSnapshot) {
                    // This method is called once with the initial value and again
                    // whenever data at this location is updated.
                    int value = dataSnapshot.getValue(int.class);
                    if(value == 0){
                        Y=3;
                        X=28;
                    }
                    else if (value == 1)
                    {
                        Y=12;
                        X=28;
                    }
                    else if (value == 2)
                    {
                        Y=23;
                        X=28;
                    }
                    else if (value == 3)
                    {
                        Y=33;
                        X=28;
                    }
                    else if (value == 4)
                    {
                        Y=45;
                        X=28;
                    }
                    else if (value == 5)
                    {
                       Y=27;
                       X=41;
                    }
                    else if (value == 6)
                    {
                        Y=27;
                        X=55;
                    }
                    //start drawing the gotten data
                    graph.removeAllSeries();
                    PointsGraphSeries<DataPoint> series= new PointsGraphSeries<>(new DataPoint[]{
                            new DataPoint(X,Y)});
                    series.setShape(PointsGraphSeries.Shape.POINT);
                    series.setSize((float) 40.5);
                     graph.addSeries(series);
                     series.setColor(Color.RED);
                    Log.d(TAG, "Value is: " + value);
                }
                @Override
                public void onCancelled(DatabaseError error) {
                    // Failed to read value
                    Log.w(TAG, "Failed to read value.", error.toException());
                }
            });
    }
}