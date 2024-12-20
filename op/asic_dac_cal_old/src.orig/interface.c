/*
 * DO NOT EDIT THIS FILE - it is generated by Glade.
 */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

#include <gdk/gdkkeysyms.h>
#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"

#define GLADE_HOOKUP_OBJECT(component,widget,name) \
  g_object_set_data_full (G_OBJECT (component), name, \
    gtk_widget_ref (widget), (GDestroyNotify) gtk_widget_unref)

#define GLADE_HOOKUP_OBJECT_NO_REF(component,widget,name) \
  g_object_set_data (G_OBJECT (component), name, widget)

GtkWidget*
create_Correct (void)
{
  GtkWidget *Correct;
  GtkWidget *table1;
  GtkWidget *label1;
  GtkWidget *label2;
  GtkWidget *label3;
  GtkWidget *label4;
  GtkWidget *label5;
  GtkWidget *label6;
  GtkWidget *npnts;
  GtkWidget *cnt_time;
  GtkWidget *dislo;
  GtkWidget *dishi;
  GtkWidget *guess;
  GtkWidget *step;
  GtkWidget *hbox1;
  GtkWidget *Scan;
  GtkWidget *alignment1;
  GtkWidget *hbox2;
  GtkWidget *image1;
  GtkWidget *label7;
  GtkWidget *correct;
  GtkWidget *Reset;
  GtkWidget *Close;
  GtkWidget *alignment2;
  GtkWidget *hbox3;
  GtkWidget *image2;
  GtkWidget *label8;

  Correct = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (Correct), _("window1"));

  table1 = gtk_table_new (7, 2, FALSE);
  gtk_widget_show (table1);
  gtk_container_add (GTK_CONTAINER (Correct), table1);

  label1 = gtk_label_new (_("Number of points in scan"));
  gtk_widget_show (label1);
  gtk_table_attach (GTK_TABLE (table1), label1, 0, 1, 0, 1,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_justify (GTK_LABEL (label1), GTK_JUSTIFY_LEFT);
  gtk_misc_set_alignment (GTK_MISC (label1), 0, 0.5);

  label2 = gtk_label_new (_("Time to count at each point"));
  gtk_widget_show (label2);
  gtk_table_attach (GTK_TABLE (table1), label2, 0, 1, 1, 2,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_justify (GTK_LABEL (label2), GTK_JUSTIFY_LEFT);
  gtk_misc_set_alignment (GTK_MISC (label2), 0, 0.5);

  label3 = gtk_label_new (_("Thresh. val. to disable lower thresh."));
  gtk_widget_show (label3);
  gtk_table_attach (GTK_TABLE (table1), label3, 0, 1, 2, 3,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_justify (GTK_LABEL (label3), GTK_JUSTIFY_LEFT);
  gtk_misc_set_alignment (GTK_MISC (label3), 0, 0.5);

  label4 = gtk_label_new (_("Thresh. val. to disable upper thresh."));
  gtk_widget_show (label4);
  gtk_table_attach (GTK_TABLE (table1), label4, 0, 1, 3, 4,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_justify (GTK_LABEL (label4), GTK_JUSTIFY_LEFT);
  gtk_misc_set_alignment (GTK_MISC (label4), 0, 0.5);

  label5 = gtk_label_new (_("Approx. value of peak height."));
  gtk_widget_show (label5);
  gtk_table_attach (GTK_TABLE (table1), label5, 0, 1, 4, 5,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_justify (GTK_LABEL (label5), GTK_JUSTIFY_LEFT);
  gtk_misc_set_alignment (GTK_MISC (label5), 0, 0.5);

  label6 = gtk_label_new (_("Step size for scan."));
  gtk_widget_show (label6);
  gtk_table_attach (GTK_TABLE (table1), label6, 0, 1, 5, 6,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_justify (GTK_LABEL (label6), GTK_JUSTIFY_LEFT);
  gtk_misc_set_alignment (GTK_MISC (label6), 0, 0.5);

  npnts = gtk_entry_new ();
  gtk_widget_show (npnts);
  gtk_table_attach (GTK_TABLE (table1), npnts, 1, 2, 0, 1,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  cnt_time = gtk_entry_new ();
  gtk_widget_show (cnt_time);
  gtk_table_attach (GTK_TABLE (table1), cnt_time, 1, 2, 1, 2,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  dislo = gtk_entry_new ();
  gtk_widget_show (dislo);
  gtk_table_attach (GTK_TABLE (table1), dislo, 1, 2, 2, 3,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  dishi = gtk_entry_new ();
  gtk_widget_show (dishi);
  gtk_table_attach (GTK_TABLE (table1), dishi, 1, 2, 3, 4,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  guess = gtk_entry_new ();
  gtk_widget_show (guess);
  gtk_table_attach (GTK_TABLE (table1), guess, 1, 2, 4, 5,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  step = gtk_entry_new ();
  gtk_widget_show (step);
  gtk_table_attach (GTK_TABLE (table1), step, 1, 2, 5, 6,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);

  hbox1 = gtk_hbox_new (FALSE, 0);
  gtk_widget_show (hbox1);
  gtk_table_attach (GTK_TABLE (table1), hbox1, 0, 1, 6, 7,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL), 0, 0);

  Scan = gtk_button_new ();
  gtk_widget_show (Scan);
  gtk_box_pack_start (GTK_BOX (hbox1), Scan, FALSE, FALSE, 0);

  alignment1 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment1);
  gtk_container_add (GTK_CONTAINER (Scan), alignment1);

  hbox2 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox2);
  gtk_container_add (GTK_CONTAINER (alignment1), hbox2);

  image1 = gtk_image_new_from_stock ("gtk-execute", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image1);
  gtk_box_pack_start (GTK_BOX (hbox2), image1, FALSE, FALSE, 0);

  label7 = gtk_label_new_with_mnemonic (_("Scan"));
  gtk_widget_show (label7);
  gtk_box_pack_start (GTK_BOX (hbox2), label7, FALSE, FALSE, 0);
  gtk_label_set_justify (GTK_LABEL (label7), GTK_JUSTIFY_LEFT);

  correct = gtk_button_new_with_mnemonic (_("Correct DACs"));
  gtk_widget_show (correct);
  gtk_box_pack_start (GTK_BOX (hbox1), correct, FALSE, FALSE, 0);

  Reset = gtk_button_new_with_mnemonic (_("Reset DACs"));
  gtk_widget_show (Reset);
  gtk_box_pack_start (GTK_BOX (hbox1), Reset, FALSE, FALSE, 0);

  Close = gtk_button_new ();
  gtk_widget_show (Close);
  gtk_table_attach (GTK_TABLE (table1), Close, 1, 2, 6, 7,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (GTK_FILL), 0, 0);

  alignment2 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment2);
  gtk_container_add (GTK_CONTAINER (Close), alignment2);

  hbox3 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox3);
  gtk_container_add (GTK_CONTAINER (alignment2), hbox3);

  image2 = gtk_image_new_from_stock ("gtk-cancel", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image2);
  gtk_box_pack_start (GTK_BOX (hbox3), image2, FALSE, FALSE, 0);

  label8 = gtk_label_new_with_mnemonic (_("Close window"));
  gtk_widget_show (label8);
  gtk_box_pack_start (GTK_BOX (hbox3), label8, FALSE, FALSE, 0);
  gtk_label_set_justify (GTK_LABEL (label8), GTK_JUSTIFY_LEFT);

  g_signal_connect ((gpointer) npnts, "activate",
                    G_CALLBACK (on_npnts_activate),
                    NULL);
  g_signal_connect ((gpointer) cnt_time, "activate",
                    G_CALLBACK (on_cnt_time_activate),
                    NULL);
  g_signal_connect ((gpointer) dislo, "activate",
                    G_CALLBACK (on_dislo_activate),
                    NULL);
  g_signal_connect ((gpointer) dishi, "activate",
                    G_CALLBACK (on_dishi_activate),
                    NULL);
  g_signal_connect ((gpointer) guess, "activate",
                    G_CALLBACK (on_guess_activate),
                    NULL);
  g_signal_connect ((gpointer) step, "activate",
                    G_CALLBACK (on_step_activate),
                    NULL);
  g_signal_connect ((gpointer) Scan, "clicked",
                    G_CALLBACK (on_Scan_clicked),
                    NULL);
  g_signal_connect ((gpointer) correct, "clicked",
                    G_CALLBACK (on_correct_clicked),
                    NULL);
  g_signal_connect ((gpointer) Reset, "clicked",
                    G_CALLBACK (on_Reset_clicked),
                    NULL);
  g_signal_connect ((gpointer) Close, "clicked",
                    G_CALLBACK (on_Close_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (Correct, Correct, "Correct");
  GLADE_HOOKUP_OBJECT (Correct, table1, "table1");
  GLADE_HOOKUP_OBJECT (Correct, label1, "label1");
  GLADE_HOOKUP_OBJECT (Correct, label2, "label2");
  GLADE_HOOKUP_OBJECT (Correct, label3, "label3");
  GLADE_HOOKUP_OBJECT (Correct, label4, "label4");
  GLADE_HOOKUP_OBJECT (Correct, label5, "label5");
  GLADE_HOOKUP_OBJECT (Correct, label6, "label6");
  GLADE_HOOKUP_OBJECT (Correct, npnts, "npnts");
  GLADE_HOOKUP_OBJECT (Correct, cnt_time, "cnt_time");
  GLADE_HOOKUP_OBJECT (Correct, dislo, "dislo");
  GLADE_HOOKUP_OBJECT (Correct, dishi, "dishi");
  GLADE_HOOKUP_OBJECT (Correct, guess, "guess");
  GLADE_HOOKUP_OBJECT (Correct, step, "step");
  GLADE_HOOKUP_OBJECT (Correct, hbox1, "hbox1");
  GLADE_HOOKUP_OBJECT (Correct, Scan, "Scan");
  GLADE_HOOKUP_OBJECT (Correct, alignment1, "alignment1");
  GLADE_HOOKUP_OBJECT (Correct, hbox2, "hbox2");
  GLADE_HOOKUP_OBJECT (Correct, image1, "image1");
  GLADE_HOOKUP_OBJECT (Correct, label7, "label7");
  GLADE_HOOKUP_OBJECT (Correct, correct, "correct");
  GLADE_HOOKUP_OBJECT (Correct, Reset, "Reset");
  GLADE_HOOKUP_OBJECT (Correct, Close, "Close");
  GLADE_HOOKUP_OBJECT (Correct, alignment2, "alignment2");
  GLADE_HOOKUP_OBJECT (Correct, hbox3, "hbox3");
  GLADE_HOOKUP_OBJECT (Correct, image2, "image2");
  GLADE_HOOKUP_OBJECT (Correct, label8, "label8");

  return Correct;
}

