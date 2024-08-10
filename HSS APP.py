from kivy.app import App
from kivy.uix.boxlayout import BoxLayout
from kivy.uix.label import Label
from kivy.uix.textinput import TextInput
from kivy.uix.button import Button
from kivy.uix.popup import Popup
from kivy.uix.screenmanager import ScreenManager, Screen
from kivy.core.window import Window

from kivy.config import Config
Config.set('graphics', 'width', '800')
Config.set('graphics', 'height', '600')

# Set icon
Window.icon = 'icon.png'  # Replace 'icon.png' with the path to your icon file

# Define screens
class LoginScreen(Screen):
    def __init__(self, **kwargs):
        super().__init__(**kwargs)
        self.orientation = 'vertical'
        
        # Add login widgets here
        self.add_widget(Label(text="Welcome to Login Screen!", font_size=24))

class MainScreen(Screen):
    def __init__(self, **kwargs):
        super().__init__(**kwargs)
        self.orientation = 'vertical'
        
        # Add main widgets here (e.g., buttons to navigate to different features)
        self.add_widget(Label(text="Welcome to Main Screen!", font_size=24))

class AudioScreen(Screen):
    def __init__(self, **kwargs):
        super().__init__(**kwargs)
        self.orientation = 'vertical'
        
        # Add audio-related widgets here
        self.add_widget(Label(text="Welcome to Audio Screen!", font_size=24))

class VideoScreen(Screen):
    def __init__(self, **kwargs):
        super().__init__(**kwargs)
        self.orientation = 'vertical'
        
        # Add video-related widgets here
        self.add_widget(Label(text="Welcome to Video Screen!", font_size=24))

class ImageScreen(Screen):
    def __init__(self, **kwargs):
        super().__init__(**kwargs)
        self.orientation = 'vertical'
        
        # Add image-related widgets here
        self.add_widget(Label(text="Welcome to Image Screen!", font_size=24))

class ChatScreen(Screen):
    def __init__(self, **kwargs):
        super().__init__(**kwargs)
        self.orientation = 'vertical'
        
        # Add chat-related widgets here
        self.add_widget(Label(text="Welcome to Chat Screen!", font_size=24))

class AdminScreen(Screen):
    def __init__(self, **kwargs):
        super().__init__(**kwargs)
        self.orientation = 'vertical'
        
        # Add admin-related widgets here
        self.add_widget(Label(text="", font_size=24))

# Create screen manager
class MyApp(App):
    def build(self):
        layout = BoxLayout(orientation='vertical')
        
        # Application name in bold
        app_name_label = Label(
            text="[color=#FFD700][b]HSS[/b]\n[size=30](Hands of Social Services)[/size]\n[/color]",
            font_size="90sp",
            markup=True, halign='center',valign='center'
        )
        layout.add_widget(app_name_label)        
        sm = ScreenManager()
        sm.add_widget(LoginScreen(name='login'))
        sm.add_widget(MainScreen(name='main'))
        sm.add_widget(AudioScreen(name='audio'))
        sm.add_widget(VideoScreen(name='video'))
        sm.add_widget(ImageScreen(name='image'))
        sm.add_widget(ChatScreen(name='chat'))
        sm.add_widget(AdminScreen(name='admin'))
        
        layout.add_widget(sm)
        return layout

if __name__ == '__main__':
    MyApp().run()

