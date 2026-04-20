import smtplib
from email.mime.text import MIMEText

msg = MIMEText("Test message from website")
msg["Subject"] = "Test Email"
msg["From"] = "info@jvsticialawoffice.ph"
msg["To"] = "info@jvsticialawoffice.ph"

with smtplib.SMTP_SSL("mail.jvsticialawoffice.ph", 465) as server:
    server.login("info@jvsticialawoffice.ph", "password123_123")
    server.send_message(msg)

print("Email sent")