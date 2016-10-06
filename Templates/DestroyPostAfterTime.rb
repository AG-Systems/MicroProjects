def index
    @posts = Post.where(created_at: 30.days.ago..Time.now)
end

#If you need to limit access to the older posts, then you can use:
def show
    @post = Post.where(created_at: 30.days.ago..Time.now).find(params[:id])
end
