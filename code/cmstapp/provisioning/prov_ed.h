/**************************** prov_ed.h ***************************

Code to manage the Provisioning Editor dialog.

Copyright (C) 2013-2014
by: Andrew J. Bibb
License: MIT 

Permission is hereby granted, free of charge, to any person obtaining a copy 
of this software and associated documentation files (the "Software"),to deal 
in the Software without restriction, including without limitation the rights 
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell 
copies of the Software, and to permit persons to whom the Software is 
furnished to do so, subject to the following conditions: 

The above copyright notice and this permission notice shall be included 
in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE 
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER 
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING 
FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER 
DEALINGS IN THE SOFTWARE.
***********************************************************************/ 

# ifndef PROVISIONING_EDITOR_H
# define PROVISIONING_EDITOR_H

# include <QDialog>
# include <QWhatsThis>
# include <QAction>
# include <QActionGroup>

# include "ui_provisioning_editor.h"
# include "./control_box/controlbox.h"

//	The class to control the properties editor UI based on a QDialog
class ProvisioningEditor : public QDialog
{
  Q_OBJECT

  public:
  // members
    ProvisioningEditor(QWidget*);
    
  private:  
  // members
		Ui::Provisioning ui;
		QActionGroup* group_file;
		QString filename;
		
  private slots:
  	void showWhatsThis();
		void resetPage(int page = -1);
		void resetAll();
		void serviceTypeChanged(const QString&);
		void selectFile(QAction*);
		void requestFileList();
		void processFileList(const QStringList&);
		void createConfFile();
				
	public:
		inline void setWhatsThisIcon(QIcon icon) {ui.toolButton_whatsthis->setIcon(icon);}
};


#endif