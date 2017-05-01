/* NascSettings.c generated by valac 0.32.1, the Vala compiler
 * generated from NascSettings.vala, do not modify */

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
#include <granite.h>
#include <stdlib.h>
#include <string.h>


#define TYPE_NASC_SETTINGS (nasc_settings_get_type ())
#define NASC_SETTINGS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_NASC_SETTINGS, NascSettings))
#define NASC_SETTINGS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_NASC_SETTINGS, NascSettingsClass))
#define IS_NASC_SETTINGS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_NASC_SETTINGS))
#define IS_NASC_SETTINGS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_NASC_SETTINGS))
#define NASC_SETTINGS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_NASC_SETTINGS, NascSettingsClass))

typedef struct _NascSettings NascSettings;
typedef struct _NascSettingsClass NascSettingsClass;
typedef struct _NascSettingsPrivate NascSettingsPrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _NascSettings {
	GraniteServicesSettings parent_instance;
	NascSettingsPrivate * priv;
};

struct _NascSettingsClass {
	GraniteServicesSettingsClass parent_class;
};

struct _NascSettingsPrivate {
	gboolean _show_tutorial;
	gboolean _advanced_mode;
	gint _window_width;
	gint _window_height;
	gint _pane_position;
	gint _opening_x;
	gint _opening_y;
	gint _open_sheet;
};


static gpointer nasc_settings_parent_class = NULL;
static NascSettings* nasc_settings_instance;
static NascSettings* nasc_settings_instance = NULL;

GType nasc_settings_get_type (void) G_GNUC_CONST;
#define NASC_SETTINGS_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), TYPE_NASC_SETTINGS, NascSettingsPrivate))
enum  {
	NASC_SETTINGS_DUMMY_PROPERTY,
	NASC_SETTINGS_SHOW_TUTORIAL,
	NASC_SETTINGS_ADVANCED_MODE,
	NASC_SETTINGS_WINDOW_WIDTH,
	NASC_SETTINGS_WINDOW_HEIGHT,
	NASC_SETTINGS_PANE_POSITION,
	NASC_SETTINGS_OPENING_X,
	NASC_SETTINGS_OPENING_Y,
	NASC_SETTINGS_OPEN_SHEET
};
#define NASC_SETTINGS_variable_names "nasc_line_"
#define NASC_SETTINGS_sheet_split_char "|§§|"
#define NASC_SETTINGS_name_split_char "-§-"
#define NASC_SETTINGS_sheet_path "/.local/share/nasc/"
#define NASC_SETTINGS_template_path "/usr/share/qalculate/nasc_template.sheets"
static NascSettings* nasc_settings_new (void);
static NascSettings* nasc_settings_construct (GType object_type);
NascSettings* nasc_settings_get_instance (void);
gboolean nasc_settings_get_show_tutorial (NascSettings* self);
void nasc_settings_set_show_tutorial (NascSettings* self, gboolean value);
gboolean nasc_settings_get_advanced_mode (NascSettings* self);
void nasc_settings_set_advanced_mode (NascSettings* self, gboolean value);
gint nasc_settings_get_window_width (NascSettings* self);
void nasc_settings_set_window_width (NascSettings* self, gint value);
gint nasc_settings_get_window_height (NascSettings* self);
void nasc_settings_set_window_height (NascSettings* self, gint value);
gint nasc_settings_get_pane_position (NascSettings* self);
void nasc_settings_set_pane_position (NascSettings* self, gint value);
gint nasc_settings_get_opening_x (NascSettings* self);
void nasc_settings_set_opening_x (NascSettings* self, gint value);
gint nasc_settings_get_opening_y (NascSettings* self);
void nasc_settings_set_opening_y (NascSettings* self, gint value);
gint nasc_settings_get_open_sheet (NascSettings* self);
void nasc_settings_set_open_sheet (NascSettings* self, gint value);
static void nasc_settings_finalize (GObject* obj);
static void _vala_nasc_settings_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);
static void _vala_nasc_settings_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec);


static NascSettings* nasc_settings_construct (GType object_type) {
	NascSettings * self = NULL;
	self = (NascSettings*) granite_services_settings_construct (object_type, "net.launchpad.nasc");
	return self;
}


static NascSettings* nasc_settings_new (void) {
	return nasc_settings_construct (TYPE_NASC_SETTINGS);
}


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


NascSettings* nasc_settings_get_instance (void) {
	NascSettings* result = NULL;
	NascSettings* _tmp0_ = NULL;
	NascSettings* _tmp2_ = NULL;
	NascSettings* _tmp3_ = NULL;
	_tmp0_ = nasc_settings_instance;
	if (_tmp0_ == NULL) {
		NascSettings* _tmp1_ = NULL;
		_tmp1_ = nasc_settings_new ();
		_g_object_unref0 (nasc_settings_instance);
		nasc_settings_instance = _tmp1_;
	}
	_tmp2_ = nasc_settings_instance;
	_tmp3_ = _g_object_ref0 (_tmp2_);
	result = _tmp3_;
	return result;
}


gboolean nasc_settings_get_show_tutorial (NascSettings* self) {
	gboolean result;
	gboolean _tmp0_ = FALSE;
	g_return_val_if_fail (self != NULL, FALSE);
	_tmp0_ = self->priv->_show_tutorial;
	result = _tmp0_;
	return result;
}


void nasc_settings_set_show_tutorial (NascSettings* self, gboolean value) {
	gboolean _tmp0_ = FALSE;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	self->priv->_show_tutorial = _tmp0_;
	g_object_notify ((GObject *) self, "show-tutorial");
}


gboolean nasc_settings_get_advanced_mode (NascSettings* self) {
	gboolean result;
	gboolean _tmp0_ = FALSE;
	g_return_val_if_fail (self != NULL, FALSE);
	_tmp0_ = self->priv->_advanced_mode;
	result = _tmp0_;
	return result;
}


void nasc_settings_set_advanced_mode (NascSettings* self, gboolean value) {
	gboolean _tmp0_ = FALSE;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	self->priv->_advanced_mode = _tmp0_;
	g_object_notify ((GObject *) self, "advanced-mode");
}


gint nasc_settings_get_window_width (NascSettings* self) {
	gint result;
	gint _tmp0_ = 0;
	g_return_val_if_fail (self != NULL, 0);
	_tmp0_ = self->priv->_window_width;
	result = _tmp0_;
	return result;
}


void nasc_settings_set_window_width (NascSettings* self, gint value) {
	gint _tmp0_ = 0;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	self->priv->_window_width = _tmp0_;
	g_object_notify ((GObject *) self, "window-width");
}


gint nasc_settings_get_window_height (NascSettings* self) {
	gint result;
	gint _tmp0_ = 0;
	g_return_val_if_fail (self != NULL, 0);
	_tmp0_ = self->priv->_window_height;
	result = _tmp0_;
	return result;
}


void nasc_settings_set_window_height (NascSettings* self, gint value) {
	gint _tmp0_ = 0;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	self->priv->_window_height = _tmp0_;
	g_object_notify ((GObject *) self, "window-height");
}


gint nasc_settings_get_pane_position (NascSettings* self) {
	gint result;
	gint _tmp0_ = 0;
	g_return_val_if_fail (self != NULL, 0);
	_tmp0_ = self->priv->_pane_position;
	result = _tmp0_;
	return result;
}


void nasc_settings_set_pane_position (NascSettings* self, gint value) {
	gint _tmp0_ = 0;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	self->priv->_pane_position = _tmp0_;
	g_object_notify ((GObject *) self, "pane-position");
}


gint nasc_settings_get_opening_x (NascSettings* self) {
	gint result;
	gint _tmp0_ = 0;
	g_return_val_if_fail (self != NULL, 0);
	_tmp0_ = self->priv->_opening_x;
	result = _tmp0_;
	return result;
}


void nasc_settings_set_opening_x (NascSettings* self, gint value) {
	gint _tmp0_ = 0;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	self->priv->_opening_x = _tmp0_;
	g_object_notify ((GObject *) self, "opening-x");
}


gint nasc_settings_get_opening_y (NascSettings* self) {
	gint result;
	gint _tmp0_ = 0;
	g_return_val_if_fail (self != NULL, 0);
	_tmp0_ = self->priv->_opening_y;
	result = _tmp0_;
	return result;
}


void nasc_settings_set_opening_y (NascSettings* self, gint value) {
	gint _tmp0_ = 0;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	self->priv->_opening_y = _tmp0_;
	g_object_notify ((GObject *) self, "opening-y");
}


gint nasc_settings_get_open_sheet (NascSettings* self) {
	gint result;
	gint _tmp0_ = 0;
	g_return_val_if_fail (self != NULL, 0);
	_tmp0_ = self->priv->_open_sheet;
	result = _tmp0_;
	return result;
}


void nasc_settings_set_open_sheet (NascSettings* self, gint value) {
	gint _tmp0_ = 0;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	self->priv->_open_sheet = _tmp0_;
	g_object_notify ((GObject *) self, "open-sheet");
}


static void nasc_settings_class_init (NascSettingsClass * klass) {
	nasc_settings_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (NascSettingsPrivate));
	G_OBJECT_CLASS (klass)->get_property = _vala_nasc_settings_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_nasc_settings_set_property;
	G_OBJECT_CLASS (klass)->finalize = nasc_settings_finalize;
	g_object_class_install_property (G_OBJECT_CLASS (klass), NASC_SETTINGS_SHOW_TUTORIAL, g_param_spec_boolean ("show-tutorial", "show-tutorial", "show-tutorial", FALSE, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), NASC_SETTINGS_ADVANCED_MODE, g_param_spec_boolean ("advanced-mode", "advanced-mode", "advanced-mode", FALSE, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), NASC_SETTINGS_WINDOW_WIDTH, g_param_spec_int ("window-width", "window-width", "window-width", G_MININT, G_MAXINT, 0, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), NASC_SETTINGS_WINDOW_HEIGHT, g_param_spec_int ("window-height", "window-height", "window-height", G_MININT, G_MAXINT, 0, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), NASC_SETTINGS_PANE_POSITION, g_param_spec_int ("pane-position", "pane-position", "pane-position", G_MININT, G_MAXINT, 0, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), NASC_SETTINGS_OPENING_X, g_param_spec_int ("opening-x", "opening-x", "opening-x", G_MININT, G_MAXINT, 0, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), NASC_SETTINGS_OPENING_Y, g_param_spec_int ("opening-y", "opening-y", "opening-y", G_MININT, G_MAXINT, 0, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), NASC_SETTINGS_OPEN_SHEET, g_param_spec_int ("open-sheet", "open-sheet", "open-sheet", G_MININT, G_MAXINT, 0, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
}


static void nasc_settings_instance_init (NascSettings * self) {
	self->priv = NASC_SETTINGS_GET_PRIVATE (self);
}


static void nasc_settings_finalize (GObject* obj) {
	NascSettings * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, TYPE_NASC_SETTINGS, NascSettings);
	G_OBJECT_CLASS (nasc_settings_parent_class)->finalize (obj);
}


GType nasc_settings_get_type (void) {
	static volatile gsize nasc_settings_type_id__volatile = 0;
	if (g_once_init_enter (&nasc_settings_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (NascSettingsClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) nasc_settings_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (NascSettings), 0, (GInstanceInitFunc) nasc_settings_instance_init, NULL };
		GType nasc_settings_type_id;
		nasc_settings_type_id = g_type_register_static (GRANITE_SERVICES_TYPE_SETTINGS, "NascSettings", &g_define_type_info, 0);
		g_once_init_leave (&nasc_settings_type_id__volatile, nasc_settings_type_id);
	}
	return nasc_settings_type_id__volatile;
}


static void _vala_nasc_settings_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	NascSettings * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, TYPE_NASC_SETTINGS, NascSettings);
	switch (property_id) {
		case NASC_SETTINGS_SHOW_TUTORIAL:
		g_value_set_boolean (value, nasc_settings_get_show_tutorial (self));
		break;
		case NASC_SETTINGS_ADVANCED_MODE:
		g_value_set_boolean (value, nasc_settings_get_advanced_mode (self));
		break;
		case NASC_SETTINGS_WINDOW_WIDTH:
		g_value_set_int (value, nasc_settings_get_window_width (self));
		break;
		case NASC_SETTINGS_WINDOW_HEIGHT:
		g_value_set_int (value, nasc_settings_get_window_height (self));
		break;
		case NASC_SETTINGS_PANE_POSITION:
		g_value_set_int (value, nasc_settings_get_pane_position (self));
		break;
		case NASC_SETTINGS_OPENING_X:
		g_value_set_int (value, nasc_settings_get_opening_x (self));
		break;
		case NASC_SETTINGS_OPENING_Y:
		g_value_set_int (value, nasc_settings_get_opening_y (self));
		break;
		case NASC_SETTINGS_OPEN_SHEET:
		g_value_set_int (value, nasc_settings_get_open_sheet (self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


static void _vala_nasc_settings_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec) {
	NascSettings * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, TYPE_NASC_SETTINGS, NascSettings);
	switch (property_id) {
		case NASC_SETTINGS_SHOW_TUTORIAL:
		nasc_settings_set_show_tutorial (self, g_value_get_boolean (value));
		break;
		case NASC_SETTINGS_ADVANCED_MODE:
		nasc_settings_set_advanced_mode (self, g_value_get_boolean (value));
		break;
		case NASC_SETTINGS_WINDOW_WIDTH:
		nasc_settings_set_window_width (self, g_value_get_int (value));
		break;
		case NASC_SETTINGS_WINDOW_HEIGHT:
		nasc_settings_set_window_height (self, g_value_get_int (value));
		break;
		case NASC_SETTINGS_PANE_POSITION:
		nasc_settings_set_pane_position (self, g_value_get_int (value));
		break;
		case NASC_SETTINGS_OPENING_X:
		nasc_settings_set_opening_x (self, g_value_get_int (value));
		break;
		case NASC_SETTINGS_OPENING_Y:
		nasc_settings_set_opening_y (self, g_value_get_int (value));
		break;
		case NASC_SETTINGS_OPEN_SHEET:
		nasc_settings_set_open_sheet (self, g_value_get_int (value));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}



