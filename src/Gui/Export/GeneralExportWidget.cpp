// Copyright (C) 2012-2016 The VPaint Developers.
// See the COPYRIGHT file at the top-level directory of this distribution
// and at https://github.com/dalboris/vpaint/blob/master/COPYRIGHT
//
// This file is part of VPaint, a vector graphics editor. It is subject to the
// license terms and conditions in the LICENSE.MIT file found in the top-level
// directory of this distribution and at http://opensource.org/licenses/MIT

#include "GeneralExportWidget.h"

#include "GeneralExportSettings.h"
#include "FormLayout.h"

#include <QComboBox>
#include <QFormLayout>
#include <QVBoxLayout>
#include <QLabel>

GeneralExportWidget::GeneralExportWidget(GeneralExportSettings * settings, QWidget * parent) :
    QWidget(parent),
    settings_(settings)
{
    // Export Type
    exportTypeComboBox_ = new QComboBox();
    exportTypeComboBox_->addItem(tr("Image"),          (char) GeneralExportSettings::ExportType::Image);
    exportTypeComboBox_->addItem(tr("Image Sequence"), (char) GeneralExportSettings::ExportType::ImageSequence);

    // Layout
    FormLayout * layout = new FormLayout();
    layout->addRow("Export Type:", exportTypeComboBox_);
    setLayout(layout);
}
