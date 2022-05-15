GL_FUNC(void,glBindTexture,(GLenum target,GLuint name),(target,name),)
GL_FUNC(void,glLoadIdentity,(void),(),)
GL_FUNC(void,glMatrixMode,(GLenum mode),(mode),)
GL_FUNC(void,glVertex3f,(GLfloat x, GLfloat y, GLfloat z),(x,y,z),)
GL_FUNC(void,glTexCoord2f,(GLfloat s, GLfloat t),(s,t),)
GL_FUNC(void,glTranslatef,(GLfloat x, GLfloat y, GLfloat z),(x,y,z),)
GL_FUNC(void,glRotatef,(GLfloat angle, GLfloat x, GLfloat y, GLfloat z),(angle,x,y,z),)
GL_FUNC(void,glBegin,(GLenum e),(e),)
GL_FUNC(void,glEnd,(void),(),)
GL_FUNC(void,glClearDepth,(GLclampd x),(x),)
GL_FUNC(void,glFrustum,( GLdouble left, GLdouble right,
                         GLdouble bottom, GLdouble top,
                         GLdouble near_val, GLdouble far_val ),
        (left,right,bottom,top,near_val,far_val),)
GL_FUNC(void,glShadeModel,(GLenum mode),(mode),)
GL_FUNC(void,glGenTextures,(GLsizei n, GLuint *textures),(n,textures),)
GL_FUNC(void,glTexImage2D,(GLenum target, GLint level, GLint internalFormat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid *pixels),(target,level,internalFormat,width,height,border,format,type,pixels),)
GL_FUNC(void,glTexParameteri,(GLenum target, GLenum pname, GLint param),(target,pname,param),)
GL_FUNC(void,glViewport,(GLint x, GLint y, GLsizei width, GLsizei height),(x,y,width,height),)
GL_FUNC(void,glEnable,(GLenum cap),(cap),)
GL_FUNC(void,glClearColor,(GLclampf r,GLclampf g,GLclampf b,GLclampf a),(r,g,b,a),)
GL_FUNC(void,glHint,(GLenum target, GLenum mode),(target,mode),)
GL_FUNC(void,glClear,(GLbitfield a),(a),)
GL_FUNC(void,glDepthFunc,(GLenum func),(func),)
GL_FUNC(void,glPopMatrix,(void),(),)
GL_FUNC(void,glPushMatrix,(void),(),)
GL_FUNC(void,glNewList,(GLuint list, GLenum mode),(list,mode),)
GL_FUNC(void,glCallList,(GLuint list),(list),)
GL_FUNC(GLuint,glGenLists,(GLsizei range),(range),return)
GL_FUNC(void,glEndList,(void),(),)
GL_FUNC(void,glMaterialfv,(GLenum face, GLenum pname, const GLfloat *params),(face,pname,params),)
GL_FUNC(void,glNormal3f,(GLfloat nx, GLfloat ny, GLfloat nz),(nx,ny,nz),)
GL_FUNC(void,glLightfv,(GLenum light, GLenum pname, const GLfloat *params),(light,pname,params),)