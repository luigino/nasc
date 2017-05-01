/* ResultBoxWidget.c generated by valac 0.32.1, the Vala compiler
 * generated from ResultBoxWidget.vala, do not modify */

/*
 * Copyright (c) 2015 Peter Arnold
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public
 * License along with this program; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 */

#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>
#include <stdlib.h>
#include <string.h>
#include <cairo.h>
#include <float.h>
#include <math.h>


#define TYPE_RESULT_BOX_WIDGET (result_box_widget_get_type ())
#define RESULT_BOX_WIDGET(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_RESULT_BOX_WIDGET, ResultBoxWidget))
#define RESULT_BOX_WIDGET_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_RESULT_BOX_WIDGET, ResultBoxWidgetClass))
#define IS_RESULT_BOX_WIDGET(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_RESULT_BOX_WIDGET))
#define IS_RESULT_BOX_WIDGET_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_RESULT_BOX_WIDGET))
#define RESULT_BOX_WIDGET_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_RESULT_BOX_WIDGET, ResultBoxWidgetClass))

typedef struct _ResultBoxWidget ResultBoxWidget;
typedef struct _ResultBoxWidgetClass ResultBoxWidgetClass;
typedef struct _ResultBoxWidgetPrivate ResultBoxWidgetPrivate;

#define TYPE_RESULT_LINE (result_line_get_type ())
#define RESULT_LINE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_RESULT_LINE, ResultLine))
#define RESULT_LINE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_RESULT_LINE, ResultLineClass))
#define IS_RESULT_LINE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_RESULT_LINE))
#define IS_RESULT_LINE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_RESULT_LINE))
#define RESULT_LINE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_RESULT_LINE, ResultLineClass))

typedef struct _ResultLine ResultLine;
typedef struct _ResultLineClass ResultLineClass;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _ResultBoxWidget {
	GtkDrawingArea parent_instance;
	ResultBoxWidgetPrivate * priv;
	ResultLine* result;
};

struct _ResultBoxWidgetClass {
	GtkDrawingAreaClass parent_class;
};

struct _ResultBoxWidgetPrivate {
	gint _line_number;
};


static gpointer result_box_widget_parent_class = NULL;

GType result_box_widget_get_type (void) G_GNUC_CONST;
GType result_line_get_type (void) G_GNUC_CONST;
#define RESULT_BOX_WIDGET_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), TYPE_RESULT_BOX_WIDGET, ResultBoxWidgetPrivate))
enum  {
	RESULT_BOX_WIDGET_DUMMY_PROPERTY,
	RESULT_BOX_WIDGET_LINE_NUMBER
};
ResultBoxWidget* result_box_widget_new (gint line_number, ResultLine* _result_);
ResultBoxWidget* result_box_widget_construct (GType object_type, gint line_number, ResultLine* _result_);
void result_box_widget_set_line_number (ResultBoxWidget* self, gint value);
static void __lambda4_ (ResultBoxWidget* self);
static void ___lambda4__result_line_changed (ResultLine* _sender, gpointer self);
static void __lambda5_ (ResultBoxWidget* self);
static void ___lambda5__result_line_destroy (ResultLine* _sender, gpointer self);
gchar* result_box_widget_get_variable_name (ResultBoxWidget* self);
const gchar* result_line_get_variable_name (ResultLine* self);
static gboolean result_box_widget_real_draw (GtkWidget* base, cairo_t* context);
const gchar* result_line_get_value (ResultLine* self);
gboolean result_box_widget_draw_content (ResultBoxWidget* self, cairo_t* context, gint x, gint y);
static void result_box_widget_roundedrec (ResultBoxWidget* self, cairo_t* cr, gint x, gint y, gint width, gint height, gint radius, gboolean fill);
gint result_box_widget_get_line_number (ResultBoxWidget* self);
static void result_box_widget_finalize (GObject* obj);
static void _vala_result_box_widget_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);
static void _vala_result_box_widget_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec);


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


static void __lambda4_ (ResultBoxWidget* self) {
	gtk_widget_queue_draw ((GtkWidget*) self);
}


static void ___lambda4__result_line_changed (ResultLine* _sender, gpointer self) {
	__lambda4_ ((ResultBoxWidget*) self);
}


static void __lambda5_ (ResultBoxWidget* self) {
	gtk_widget_destroy ((GtkWidget*) self);
}


static void ___lambda5__result_line_destroy (ResultLine* _sender, gpointer self) {
	__lambda5_ ((ResultBoxWidget*) self);
}


ResultBoxWidget* result_box_widget_construct (GType object_type, gint line_number, ResultLine* _result_) {
	ResultBoxWidget * self = NULL;
	gint _tmp0_ = 0;
	ResultLine* _tmp1_ = NULL;
	ResultLine* _tmp2_ = NULL;
	ResultLine* _tmp3_ = NULL;
	ResultLine* _tmp4_ = NULL;
	g_return_val_if_fail (_result_ != NULL, NULL);
	self = (ResultBoxWidget*) g_object_new (object_type, NULL);
	_tmp0_ = line_number;
	result_box_widget_set_line_number (self, _tmp0_);
	_tmp1_ = _result_;
	_tmp2_ = _g_object_ref0 (_tmp1_);
	_g_object_unref0 (self->result);
	self->result = _tmp2_;
	gtk_widget_set_size_request ((GtkWidget*) self, 15, 15);
	gtk_widget_show ((GtkWidget*) self);
	_tmp3_ = self->result;
	g_signal_connect_object (_tmp3_, "changed", (GCallback) ___lambda4__result_line_changed, self, 0);
	_tmp4_ = _result_;
	g_signal_connect_object (_tmp4_, "destroy", (GCallback) ___lambda5__result_line_destroy, self, 0);
	return self;
}


ResultBoxWidget* result_box_widget_new (gint line_number, ResultLine* _result_) {
	return result_box_widget_construct (TYPE_RESULT_BOX_WIDGET, line_number, _result_);
}


gchar* result_box_widget_get_variable_name (ResultBoxWidget* self) {
	gchar* result = NULL;
	ResultLine* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	const gchar* _tmp2_ = NULL;
	gchar* _tmp3_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->result;
	_tmp1_ = result_line_get_variable_name (_tmp0_);
	_tmp2_ = _tmp1_;
	_tmp3_ = g_strdup (_tmp2_);
	result = _tmp3_;
	return result;
}


static gboolean result_box_widget_real_draw (GtkWidget* base, cairo_t* context) {
	ResultBoxWidget * self;
	gboolean result = FALSE;
	cairo_t* _tmp0_ = NULL;
	cairo_text_extents_t extents = {0};
	cairo_t* _tmp1_ = NULL;
	ResultLine* _tmp2_ = NULL;
	const gchar* _tmp3_ = NULL;
	const gchar* _tmp4_ = NULL;
	cairo_text_extents_t _tmp5_ = {0};
	gint box_width = 0;
	cairo_text_extents_t _tmp6_ = {0};
	gdouble _tmp7_ = 0.0;
	self = (ResultBoxWidget*) base;
	g_return_val_if_fail (context != NULL, FALSE);
	_tmp0_ = context;
	cairo_set_font_size (_tmp0_, (gdouble) 16);
	_tmp1_ = context;
	_tmp2_ = self->result;
	_tmp3_ = result_line_get_value (_tmp2_);
	_tmp4_ = _tmp3_;
	cairo_text_extents (_tmp1_, _tmp4_, &_tmp5_);
	extents = _tmp5_;
	_tmp6_ = extents;
	_tmp7_ = _tmp6_.width;
	box_width = ((gint) _tmp7_) + (2 * 8);
	gtk_widget_set_size_request ((GtkWidget*) self, box_width, 15);
	result = TRUE;
	return result;
}


gboolean result_box_widget_draw_content (ResultBoxWidget* self, cairo_t* context, gint x, gint y) {
	gboolean result = FALSE;
	cairo_t* _tmp0_ = NULL;
	cairo_text_extents_t extents = {0};
	cairo_t* _tmp1_ = NULL;
	ResultLine* _tmp2_ = NULL;
	const gchar* _tmp3_ = NULL;
	const gchar* _tmp4_ = NULL;
	cairo_text_extents_t _tmp5_ = {0};
	gint dy = 0;
	gint box_dx_text = 0;
	gint box_mdy_text = 0;
	gint box_height = 0;
	gint box_width = 0;
	cairo_text_extents_t _tmp6_ = {0};
	gdouble _tmp7_ = 0.0;
	cairo_t* _tmp8_ = NULL;
	cairo_t* _tmp9_ = NULL;
	cairo_t* _tmp10_ = NULL;
	gint _tmp11_ = 0;
	gint _tmp12_ = 0;
	cairo_t* _tmp13_ = NULL;
	gint _tmp14_ = 0;
	gint _tmp15_ = 0;
	cairo_t* _tmp16_ = NULL;
	gint _tmp17_ = 0;
	gint _tmp18_ = 0;
	cairo_t* _tmp19_ = NULL;
	cairo_t* _tmp20_ = NULL;
	ResultLine* _tmp21_ = NULL;
	const gchar* _tmp22_ = NULL;
	const gchar* _tmp23_ = NULL;
	cairo_t* _tmp24_ = NULL;
	g_return_val_if_fail (self != NULL, FALSE);
	g_return_val_if_fail (context != NULL, FALSE);
	_tmp0_ = context;
	cairo_set_font_size (_tmp0_, (gdouble) 16);
	_tmp1_ = context;
	_tmp2_ = self->result;
	_tmp3_ = result_line_get_value (_tmp2_);
	_tmp4_ = _tmp3_;
	cairo_text_extents (_tmp1_, _tmp4_, &_tmp5_);
	extents = _tmp5_;
	dy = -2;
	box_dx_text = 8;
	box_mdy_text = 5;
	box_height = 22;
	_tmp6_ = extents;
	_tmp7_ = _tmp6_.width;
	box_width = ((gint) _tmp7_) + (2 * box_dx_text);
	_tmp8_ = context;
	cairo_set_source_rgba (_tmp8_, 0.854901961, 0.933333333, 0.984313725, 0.6);
	_tmp9_ = context;
	cairo_set_line_width (_tmp9_, (gdouble) 1);
	_tmp10_ = context;
	_tmp11_ = x;
	_tmp12_ = y;
	result_box_widget_roundedrec (self, _tmp10_, _tmp11_, _tmp12_ + dy, box_width, box_height, 4, TRUE);
	_tmp13_ = context;
	_tmp14_ = x;
	_tmp15_ = y;
	result_box_widget_roundedrec (self, _tmp13_, _tmp14_, _tmp15_ + dy, box_width, box_height, 4, FALSE);
	_tmp16_ = context;
	_tmp17_ = x;
	_tmp18_ = y;
	cairo_move_to (_tmp16_, (gdouble) ((_tmp17_ + box_dx_text) - 1), (gdouble) (((_tmp18_ + dy) + box_height) - box_mdy_text));
	_tmp19_ = context;
	cairo_set_source_rgba (_tmp19_, 0.145098039, 0.42745098, 0.615686275, (gdouble) 1);
	_tmp20_ = context;
	_tmp21_ = self->result;
	_tmp22_ = result_line_get_value (_tmp21_);
	_tmp23_ = _tmp22_;
	cairo_show_text (_tmp20_, _tmp23_);
	_tmp24_ = context;
	cairo_stroke (_tmp24_);
	result = TRUE;
	return result;
}


static void result_box_widget_roundedrec (ResultBoxWidget* self, cairo_t* cr, gint x, gint y, gint width, gint height, gint radius, gboolean fill) {
	gint x0 = 0;
	gint _tmp0_ = 0;
	gint _tmp1_ = 0;
	gint y0 = 0;
	gint _tmp2_ = 0;
	gint _tmp3_ = 0;
	gint rect_width = 0;
	gint _tmp4_ = 0;
	gint _tmp5_ = 0;
	gint rect_height = 0;
	gint _tmp6_ = 0;
	gint _tmp7_ = 0;
	cairo_t* _tmp8_ = NULL;
	gint x1 = 0;
	gint _tmp9_ = 0;
	gint _tmp10_ = 0;
	gint y1 = 0;
	gint _tmp11_ = 0;
	gint _tmp12_ = 0;
	gint _tmp13_ = 0;
	gint _tmp14_ = 0;
	cairo_t* _tmp187_ = NULL;
	gboolean _tmp188_ = FALSE;
	cairo_t* _tmp190_ = NULL;
	g_return_if_fail (self != NULL);
	g_return_if_fail (cr != NULL);
	_tmp0_ = x;
	_tmp1_ = radius;
	x0 = _tmp0_ + (_tmp1_ / 2);
	_tmp2_ = y;
	_tmp3_ = radius;
	y0 = _tmp2_ + (_tmp3_ / 2);
	_tmp4_ = width;
	_tmp5_ = radius;
	rect_width = _tmp4_ - _tmp5_;
	_tmp6_ = height;
	_tmp7_ = radius;
	rect_height = _tmp6_ - _tmp7_;
	_tmp8_ = cr;
	cairo_save (_tmp8_);
	_tmp9_ = x0;
	_tmp10_ = rect_width;
	x1 = _tmp9_ + _tmp10_;
	_tmp11_ = y0;
	_tmp12_ = rect_height;
	y1 = _tmp11_ + _tmp12_;
	_tmp13_ = rect_width;
	_tmp14_ = radius;
	if ((_tmp13_ / 2) < _tmp14_) {
		gint _tmp15_ = 0;
		gint _tmp16_ = 0;
		_tmp15_ = rect_height;
		_tmp16_ = radius;
		if ((_tmp15_ / 2) < _tmp16_) {
			cairo_t* _tmp17_ = NULL;
			gint _tmp18_ = 0;
			gint _tmp19_ = 0;
			gint _tmp20_ = 0;
			cairo_t* _tmp21_ = NULL;
			gint _tmp22_ = 0;
			gint _tmp23_ = 0;
			gint _tmp24_ = 0;
			gint _tmp25_ = 0;
			gint _tmp26_ = 0;
			gint _tmp27_ = 0;
			gint _tmp28_ = 0;
			cairo_t* _tmp29_ = NULL;
			gint _tmp30_ = 0;
			gint _tmp31_ = 0;
			gint _tmp32_ = 0;
			gint _tmp33_ = 0;
			gint _tmp34_ = 0;
			gint _tmp35_ = 0;
			gint _tmp36_ = 0;
			cairo_t* _tmp37_ = NULL;
			gint _tmp38_ = 0;
			gint _tmp39_ = 0;
			gint _tmp40_ = 0;
			gint _tmp41_ = 0;
			gint _tmp42_ = 0;
			gint _tmp43_ = 0;
			gint _tmp44_ = 0;
			cairo_t* _tmp45_ = NULL;
			gint _tmp46_ = 0;
			gint _tmp47_ = 0;
			gint _tmp48_ = 0;
			gint _tmp49_ = 0;
			gint _tmp50_ = 0;
			gint _tmp51_ = 0;
			gint _tmp52_ = 0;
			_tmp17_ = cr;
			_tmp18_ = x0;
			_tmp19_ = y0;
			_tmp20_ = y1;
			cairo_move_to (_tmp17_, (gdouble) _tmp18_, (gdouble) ((_tmp19_ + _tmp20_) / 2));
			_tmp21_ = cr;
			_tmp22_ = x0;
			_tmp23_ = y0;
			_tmp24_ = x0;
			_tmp25_ = y0;
			_tmp26_ = x0;
			_tmp27_ = x1;
			_tmp28_ = y0;
			cairo_curve_to (_tmp21_, (gdouble) _tmp22_, (gdouble) _tmp23_, (gdouble) _tmp24_, (gdouble) _tmp25_, (gdouble) ((_tmp26_ + _tmp27_) / 2), (gdouble) _tmp28_);
			_tmp29_ = cr;
			_tmp30_ = x1;
			_tmp31_ = y0;
			_tmp32_ = x1;
			_tmp33_ = y0;
			_tmp34_ = x1;
			_tmp35_ = y0;
			_tmp36_ = y1;
			cairo_curve_to (_tmp29_, (gdouble) _tmp30_, (gdouble) _tmp31_, (gdouble) _tmp32_, (gdouble) _tmp33_, (gdouble) _tmp34_, (gdouble) ((_tmp35_ + _tmp36_) / 2));
			_tmp37_ = cr;
			_tmp38_ = x1;
			_tmp39_ = y1;
			_tmp40_ = x1;
			_tmp41_ = y1;
			_tmp42_ = x1;
			_tmp43_ = x0;
			_tmp44_ = y1;
			cairo_curve_to (_tmp37_, (gdouble) _tmp38_, (gdouble) _tmp39_, (gdouble) _tmp40_, (gdouble) _tmp41_, (gdouble) ((_tmp42_ + _tmp43_) / 2), (gdouble) _tmp44_);
			_tmp45_ = cr;
			_tmp46_ = x0;
			_tmp47_ = y1;
			_tmp48_ = x0;
			_tmp49_ = y1;
			_tmp50_ = x0;
			_tmp51_ = y0;
			_tmp52_ = y1;
			cairo_curve_to (_tmp45_, (gdouble) _tmp46_, (gdouble) _tmp47_, (gdouble) _tmp48_, (gdouble) _tmp49_, (gdouble) _tmp50_, (gdouble) ((_tmp51_ + _tmp52_) / 2));
		} else {
			cairo_t* _tmp53_ = NULL;
			gint _tmp54_ = 0;
			gint _tmp55_ = 0;
			gint _tmp56_ = 0;
			cairo_t* _tmp57_ = NULL;
			gint _tmp58_ = 0;
			gint _tmp59_ = 0;
			gint _tmp60_ = 0;
			gint _tmp61_ = 0;
			gint _tmp62_ = 0;
			gint _tmp63_ = 0;
			gint _tmp64_ = 0;
			cairo_t* _tmp65_ = NULL;
			gint _tmp66_ = 0;
			gint _tmp67_ = 0;
			gint _tmp68_ = 0;
			gint _tmp69_ = 0;
			gint _tmp70_ = 0;
			gint _tmp71_ = 0;
			gint _tmp72_ = 0;
			cairo_t* _tmp73_ = NULL;
			gint _tmp74_ = 0;
			gint _tmp75_ = 0;
			gint _tmp76_ = 0;
			cairo_t* _tmp77_ = NULL;
			gint _tmp78_ = 0;
			gint _tmp79_ = 0;
			gint _tmp80_ = 0;
			gint _tmp81_ = 0;
			gint _tmp82_ = 0;
			gint _tmp83_ = 0;
			gint _tmp84_ = 0;
			cairo_t* _tmp85_ = NULL;
			gint _tmp86_ = 0;
			gint _tmp87_ = 0;
			gint _tmp88_ = 0;
			gint _tmp89_ = 0;
			gint _tmp90_ = 0;
			gint _tmp91_ = 0;
			gint _tmp92_ = 0;
			_tmp53_ = cr;
			_tmp54_ = x0;
			_tmp55_ = y0;
			_tmp56_ = radius;
			cairo_move_to (_tmp53_, (gdouble) _tmp54_, (gdouble) (_tmp55_ + _tmp56_));
			_tmp57_ = cr;
			_tmp58_ = x0;
			_tmp59_ = y0;
			_tmp60_ = x0;
			_tmp61_ = y0;
			_tmp62_ = x0;
			_tmp63_ = x1;
			_tmp64_ = y0;
			cairo_curve_to (_tmp57_, (gdouble) _tmp58_, (gdouble) _tmp59_, (gdouble) _tmp60_, (gdouble) _tmp61_, (gdouble) ((_tmp62_ + _tmp63_) / 2), (gdouble) _tmp64_);
			_tmp65_ = cr;
			_tmp66_ = x1;
			_tmp67_ = y0;
			_tmp68_ = x1;
			_tmp69_ = y0;
			_tmp70_ = x1;
			_tmp71_ = y0;
			_tmp72_ = radius;
			cairo_curve_to (_tmp65_, (gdouble) _tmp66_, (gdouble) _tmp67_, (gdouble) _tmp68_, (gdouble) _tmp69_, (gdouble) _tmp70_, (gdouble) (_tmp71_ + _tmp72_));
			_tmp73_ = cr;
			_tmp74_ = x1;
			_tmp75_ = y1;
			_tmp76_ = radius;
			cairo_line_to (_tmp73_, (gdouble) _tmp74_, (gdouble) (_tmp75_ - _tmp76_));
			_tmp77_ = cr;
			_tmp78_ = x1;
			_tmp79_ = y1;
			_tmp80_ = x1;
			_tmp81_ = y1;
			_tmp82_ = x1;
			_tmp83_ = x0;
			_tmp84_ = y1;
			cairo_curve_to (_tmp77_, (gdouble) _tmp78_, (gdouble) _tmp79_, (gdouble) _tmp80_, (gdouble) _tmp81_, (gdouble) ((_tmp82_ + _tmp83_) / 2), (gdouble) _tmp84_);
			_tmp85_ = cr;
			_tmp86_ = x0;
			_tmp87_ = y1;
			_tmp88_ = x0;
			_tmp89_ = y1;
			_tmp90_ = x0;
			_tmp91_ = y1;
			_tmp92_ = radius;
			cairo_curve_to (_tmp85_, (gdouble) _tmp86_, (gdouble) _tmp87_, (gdouble) _tmp88_, (gdouble) _tmp89_, (gdouble) _tmp90_, (gdouble) (_tmp91_ - _tmp92_));
		}
	} else {
		gint _tmp93_ = 0;
		gint _tmp94_ = 0;
		_tmp93_ = rect_height;
		_tmp94_ = radius;
		if ((_tmp93_ / 2) < _tmp94_) {
			cairo_t* _tmp95_ = NULL;
			gint _tmp96_ = 0;
			gint _tmp97_ = 0;
			gint _tmp98_ = 0;
			cairo_t* _tmp99_ = NULL;
			gint _tmp100_ = 0;
			gint _tmp101_ = 0;
			gint _tmp102_ = 0;
			gint _tmp103_ = 0;
			gint _tmp104_ = 0;
			gint _tmp105_ = 0;
			gint _tmp106_ = 0;
			cairo_t* _tmp107_ = NULL;
			gint _tmp108_ = 0;
			gint _tmp109_ = 0;
			gint _tmp110_ = 0;
			cairo_t* _tmp111_ = NULL;
			gint _tmp112_ = 0;
			gint _tmp113_ = 0;
			gint _tmp114_ = 0;
			gint _tmp115_ = 0;
			gint _tmp116_ = 0;
			gint _tmp117_ = 0;
			gint _tmp118_ = 0;
			cairo_t* _tmp119_ = NULL;
			gint _tmp120_ = 0;
			gint _tmp121_ = 0;
			gint _tmp122_ = 0;
			gint _tmp123_ = 0;
			gint _tmp124_ = 0;
			gint _tmp125_ = 0;
			gint _tmp126_ = 0;
			cairo_t* _tmp127_ = NULL;
			gint _tmp128_ = 0;
			gint _tmp129_ = 0;
			gint _tmp130_ = 0;
			cairo_t* _tmp131_ = NULL;
			gint _tmp132_ = 0;
			gint _tmp133_ = 0;
			gint _tmp134_ = 0;
			gint _tmp135_ = 0;
			gint _tmp136_ = 0;
			gint _tmp137_ = 0;
			gint _tmp138_ = 0;
			_tmp95_ = cr;
			_tmp96_ = x0;
			_tmp97_ = y0;
			_tmp98_ = y1;
			cairo_move_to (_tmp95_, (gdouble) _tmp96_, (gdouble) ((_tmp97_ + _tmp98_) / 2));
			_tmp99_ = cr;
			_tmp100_ = x0;
			_tmp101_ = y0;
			_tmp102_ = x0;
			_tmp103_ = y0;
			_tmp104_ = x0;
			_tmp105_ = radius;
			_tmp106_ = y0;
			cairo_curve_to (_tmp99_, (gdouble) _tmp100_, (gdouble) _tmp101_, (gdouble) _tmp102_, (gdouble) _tmp103_, (gdouble) (_tmp104_ + _tmp105_), (gdouble) _tmp106_);
			_tmp107_ = cr;
			_tmp108_ = x1;
			_tmp109_ = radius;
			_tmp110_ = y0;
			cairo_line_to (_tmp107_, (gdouble) (_tmp108_ - _tmp109_), (gdouble) _tmp110_);
			_tmp111_ = cr;
			_tmp112_ = x1;
			_tmp113_ = y0;
			_tmp114_ = x1;
			_tmp115_ = y0;
			_tmp116_ = x1;
			_tmp117_ = y0;
			_tmp118_ = y1;
			cairo_curve_to (_tmp111_, (gdouble) _tmp112_, (gdouble) _tmp113_, (gdouble) _tmp114_, (gdouble) _tmp115_, (gdouble) _tmp116_, (gdouble) ((_tmp117_ + _tmp118_) / 2));
			_tmp119_ = cr;
			_tmp120_ = x1;
			_tmp121_ = y1;
			_tmp122_ = x1;
			_tmp123_ = y1;
			_tmp124_ = x1;
			_tmp125_ = radius;
			_tmp126_ = y1;
			cairo_curve_to (_tmp119_, (gdouble) _tmp120_, (gdouble) _tmp121_, (gdouble) _tmp122_, (gdouble) _tmp123_, (gdouble) (_tmp124_ - _tmp125_), (gdouble) _tmp126_);
			_tmp127_ = cr;
			_tmp128_ = x0;
			_tmp129_ = radius;
			_tmp130_ = y1;
			cairo_line_to (_tmp127_, (gdouble) (_tmp128_ + _tmp129_), (gdouble) _tmp130_);
			_tmp131_ = cr;
			_tmp132_ = x0;
			_tmp133_ = y1;
			_tmp134_ = x0;
			_tmp135_ = y1;
			_tmp136_ = x0;
			_tmp137_ = y0;
			_tmp138_ = y1;
			cairo_curve_to (_tmp131_, (gdouble) _tmp132_, (gdouble) _tmp133_, (gdouble) _tmp134_, (gdouble) _tmp135_, (gdouble) _tmp136_, (gdouble) ((_tmp137_ + _tmp138_) / 2));
		} else {
			cairo_t* _tmp139_ = NULL;
			gint _tmp140_ = 0;
			gint _tmp141_ = 0;
			gint _tmp142_ = 0;
			cairo_t* _tmp143_ = NULL;
			gint _tmp144_ = 0;
			gint _tmp145_ = 0;
			gint _tmp146_ = 0;
			gint _tmp147_ = 0;
			gint _tmp148_ = 0;
			gint _tmp149_ = 0;
			gint _tmp150_ = 0;
			cairo_t* _tmp151_ = NULL;
			gint _tmp152_ = 0;
			gint _tmp153_ = 0;
			gint _tmp154_ = 0;
			cairo_t* _tmp155_ = NULL;
			gint _tmp156_ = 0;
			gint _tmp157_ = 0;
			gint _tmp158_ = 0;
			gint _tmp159_ = 0;
			gint _tmp160_ = 0;
			gint _tmp161_ = 0;
			gint _tmp162_ = 0;
			cairo_t* _tmp163_ = NULL;
			gint _tmp164_ = 0;
			gint _tmp165_ = 0;
			gint _tmp166_ = 0;
			cairo_t* _tmp167_ = NULL;
			gint _tmp168_ = 0;
			gint _tmp169_ = 0;
			gint _tmp170_ = 0;
			gint _tmp171_ = 0;
			gint _tmp172_ = 0;
			gint _tmp173_ = 0;
			gint _tmp174_ = 0;
			cairo_t* _tmp175_ = NULL;
			gint _tmp176_ = 0;
			gint _tmp177_ = 0;
			gint _tmp178_ = 0;
			cairo_t* _tmp179_ = NULL;
			gint _tmp180_ = 0;
			gint _tmp181_ = 0;
			gint _tmp182_ = 0;
			gint _tmp183_ = 0;
			gint _tmp184_ = 0;
			gint _tmp185_ = 0;
			gint _tmp186_ = 0;
			_tmp139_ = cr;
			_tmp140_ = x0;
			_tmp141_ = y0;
			_tmp142_ = radius;
			cairo_move_to (_tmp139_, (gdouble) _tmp140_, (gdouble) (_tmp141_ + _tmp142_));
			_tmp143_ = cr;
			_tmp144_ = x0;
			_tmp145_ = y0;
			_tmp146_ = x0;
			_tmp147_ = y0;
			_tmp148_ = x0;
			_tmp149_ = radius;
			_tmp150_ = y0;
			cairo_curve_to (_tmp143_, (gdouble) _tmp144_, (gdouble) _tmp145_, (gdouble) _tmp146_, (gdouble) _tmp147_, (gdouble) (_tmp148_ + _tmp149_), (gdouble) _tmp150_);
			_tmp151_ = cr;
			_tmp152_ = x1;
			_tmp153_ = radius;
			_tmp154_ = y0;
			cairo_line_to (_tmp151_, (gdouble) (_tmp152_ - _tmp153_), (gdouble) _tmp154_);
			_tmp155_ = cr;
			_tmp156_ = x1;
			_tmp157_ = y0;
			_tmp158_ = x1;
			_tmp159_ = y0;
			_tmp160_ = x1;
			_tmp161_ = y0;
			_tmp162_ = radius;
			cairo_curve_to (_tmp155_, (gdouble) _tmp156_, (gdouble) _tmp157_, (gdouble) _tmp158_, (gdouble) _tmp159_, (gdouble) _tmp160_, (gdouble) (_tmp161_ + _tmp162_));
			_tmp163_ = cr;
			_tmp164_ = x1;
			_tmp165_ = y1;
			_tmp166_ = radius;
			cairo_line_to (_tmp163_, (gdouble) _tmp164_, (gdouble) (_tmp165_ - _tmp166_));
			_tmp167_ = cr;
			_tmp168_ = x1;
			_tmp169_ = y1;
			_tmp170_ = x1;
			_tmp171_ = y1;
			_tmp172_ = x1;
			_tmp173_ = radius;
			_tmp174_ = y1;
			cairo_curve_to (_tmp167_, (gdouble) _tmp168_, (gdouble) _tmp169_, (gdouble) _tmp170_, (gdouble) _tmp171_, (gdouble) (_tmp172_ - _tmp173_), (gdouble) _tmp174_);
			_tmp175_ = cr;
			_tmp176_ = x0;
			_tmp177_ = radius;
			_tmp178_ = y1;
			cairo_line_to (_tmp175_, (gdouble) (_tmp176_ + _tmp177_), (gdouble) _tmp178_);
			_tmp179_ = cr;
			_tmp180_ = x0;
			_tmp181_ = y1;
			_tmp182_ = x0;
			_tmp183_ = y1;
			_tmp184_ = x0;
			_tmp185_ = y1;
			_tmp186_ = radius;
			cairo_curve_to (_tmp179_, (gdouble) _tmp180_, (gdouble) _tmp181_, (gdouble) _tmp182_, (gdouble) _tmp183_, (gdouble) _tmp184_, (gdouble) (_tmp185_ - _tmp186_));
		}
	}
	_tmp187_ = cr;
	cairo_close_path (_tmp187_);
	_tmp188_ = fill;
	if (_tmp188_) {
		cairo_t* _tmp189_ = NULL;
		_tmp189_ = cr;
		cairo_fill (_tmp189_);
	}
	_tmp190_ = cr;
	cairo_restore (_tmp190_);
}


gint result_box_widget_get_line_number (ResultBoxWidget* self) {
	gint result;
	gint _tmp0_ = 0;
	g_return_val_if_fail (self != NULL, 0);
	_tmp0_ = self->priv->_line_number;
	result = _tmp0_;
	return result;
}


void result_box_widget_set_line_number (ResultBoxWidget* self, gint value) {
	gint _tmp0_ = 0;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	self->priv->_line_number = _tmp0_;
	g_object_notify ((GObject *) self, "line-number");
}


static void result_box_widget_class_init (ResultBoxWidgetClass * klass) {
	result_box_widget_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (ResultBoxWidgetPrivate));
	((GtkWidgetClass *) klass)->draw = result_box_widget_real_draw;
	G_OBJECT_CLASS (klass)->get_property = _vala_result_box_widget_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_result_box_widget_set_property;
	G_OBJECT_CLASS (klass)->finalize = result_box_widget_finalize;
	g_object_class_install_property (G_OBJECT_CLASS (klass), RESULT_BOX_WIDGET_LINE_NUMBER, g_param_spec_int ("line-number", "line-number", "line-number", G_MININT, G_MAXINT, 0, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
}


static void result_box_widget_instance_init (ResultBoxWidget * self) {
	self->priv = RESULT_BOX_WIDGET_GET_PRIVATE (self);
}


static void result_box_widget_finalize (GObject* obj) {
	ResultBoxWidget * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, TYPE_RESULT_BOX_WIDGET, ResultBoxWidget);
	_g_object_unref0 (self->result);
	G_OBJECT_CLASS (result_box_widget_parent_class)->finalize (obj);
}


GType result_box_widget_get_type (void) {
	static volatile gsize result_box_widget_type_id__volatile = 0;
	if (g_once_init_enter (&result_box_widget_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ResultBoxWidgetClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) result_box_widget_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ResultBoxWidget), 0, (GInstanceInitFunc) result_box_widget_instance_init, NULL };
		GType result_box_widget_type_id;
		result_box_widget_type_id = g_type_register_static (gtk_drawing_area_get_type (), "ResultBoxWidget", &g_define_type_info, 0);
		g_once_init_leave (&result_box_widget_type_id__volatile, result_box_widget_type_id);
	}
	return result_box_widget_type_id__volatile;
}


static void _vala_result_box_widget_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	ResultBoxWidget * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, TYPE_RESULT_BOX_WIDGET, ResultBoxWidget);
	switch (property_id) {
		case RESULT_BOX_WIDGET_LINE_NUMBER:
		g_value_set_int (value, result_box_widget_get_line_number (self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


static void _vala_result_box_widget_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec) {
	ResultBoxWidget * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, TYPE_RESULT_BOX_WIDGET, ResultBoxWidget);
	switch (property_id) {
		case RESULT_BOX_WIDGET_LINE_NUMBER:
		result_box_widget_set_line_number (self, g_value_get_int (value));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}



